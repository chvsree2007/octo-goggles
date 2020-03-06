#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n\nFirst row 2 column of file 'argc.c'\n\n");
	system("cat argc.c| head -n 1 | awk '{print $2}'");
	return 0;
}
