/* gcc -o reader reader.c -lrt */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>

int main()
{
	const char *name = "wanswitchflag";
	const int SIZE = 1;
	int shmfd;
	void *ptr;

	//shmfd = shm_open(name, O_RDONLY, 0666);
	shmfd = shm_open(name, O_RDWR, 0666);
	if(shmfd == -1)
	{
		printf("error opening shared memory");
		exit(-1);
	}
	ptr = mmap(0,1,PROT_READ|PROT_WRITE,MAP_SHARED,shmfd,0);
	if(ptr == MAP_FAILED)
	{
		printf("mmap failed");
		exit(-1);
	}
	printf("before writing into shared memory ");
	printf("%s\n",(char *)ptr);
	sprintf(ptr,"%s","1");
	munmap(ptr,1);

	ptr = mmap(0,1,PROT_READ|PROT_WRITE,MAP_SHARED,shmfd,0);
	if(ptr == MAP_FAILED)
	{
		printf("mmap failed");
		exit(-1);
	}
	printf("after writing into shared memory ");
	printf("%s\n",(char *)ptr);
	munmap(ptr,1);
	
	if(shm_unlink(name) == -1)
	{
		printf("error in removing shared memory");
		exit(-1);
	}
	return 0;
}
