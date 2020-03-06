#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n\nFirst 2 lines of the file 'argc.c'\n\n");
	system("cat argc.c|head -n 2");
	printf("\n\nFirst 2 lines of the file 'argc.c'\n\n");
	system("head -n 2 argc.c");
	printf("\n\nLast 4 lines of the file 'argc.c'\n\n");
	system("cat argc.c|tail -n 4");
	printf("\n\nLast 4 lines of the file 'argc.c'\n\n");
	system("tail -n 4 argc.c");
	return 0;
}
