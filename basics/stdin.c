#include <stdio.h>
#include <unistd.h>

int main()
{
	write(0, "hello world", 12);
	return 0;
}
