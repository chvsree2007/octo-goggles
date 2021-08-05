/* gcc -o writer writer.c -lrt */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

int main()
{
	const int SIZE = 1;
	const char *shmname = "wanswitchflag";
	const char *message= "0";
	void *ptr;
	int shmfd;
	shmfd = shm_open(shmname, O_CREAT|O_RDWR, 0666);
	if(shmfd == -1)
	{
		printf("failed to create shared memory");
		exit(-1);
	}
	ftruncate(shmfd, SIZE);
	ptr = mmap(0,SIZE,PROT_READ|PROT_WRITE, MAP_SHARED,shmfd,0);
	if(ptr == MAP_FAILED)
	{
		printf("map failed");
		return -1;
	}
	sprintf(ptr,"%s",message);
	return 0;

}
