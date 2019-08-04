#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/poll.h>
#include <fcntl.h>

char buffer[4096];

int main(int argc, char **argv)
{
    struct pollfd pfd;
    int n;

    fcntl(0, F_SETFL, fcntl(0,F_GETFL) | O_NONBLOCK); /* stdin */
    pfd.fd = 0;  /* stdin */
    pfd.events = POLLIN;

    while (1) {
        n=read(0, buffer, 4096);
        if (n >= 0)
            write(1, buffer, n);
	n = poll(&pfd, 1, -1);
	if (n < 0)
	    break;
    }
    perror( n<0 ? "stdin" : "stdout");
    exit(1);
}

