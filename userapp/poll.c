#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <poll.h>
int main (int argc, char *argv[])
{
	int f;
	struct pollfd poll_fds [1];
	int ret;
	char value[4];
	f = open("/sys/class/gpio/gpio60/value", O_RDONLY);
	poll_fds[0].fd = f;
	poll_fds[0].events = POLLPRI | POLLERR;
	while (1) {
		if (poll(poll_fds, 1, -1) > 0) {
			read(f, &value, sizeof(value));
			printf("Interrupt! value=%c\n", value[0]);
		}
	}
}
