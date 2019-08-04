#include<stdio.h> 
#include<stdlib.h> /*for calloc() */
#include<unistd.h> /*for read() */
#include <fcntl.h> /* for open() */ 
int main() 
{ 
	int fd, sz; 
	char *buf = (char *) calloc(100, sizeof(char)); 
	fd = open("foo.txt", O_RDONLY); 
	if (fd < 0) { 
		perror("r1"); 
		exit(1);
	} 
	sz = read(fd, buf, 10); 
	printf("called read(% d, c, 10).  returned that"
		" %d bytes  were read.\n", fd, sz); 
	buf[sz] = '\0'; 
	printf("Those bytes are as follows: %s\n", buf);
	return 0; 
}
