/*scanf consumes only input that matches the format string, returns number of
 * characters consumed. Any unmatched character causes it to stop scanning and 
 * leaves the invalid character still in the buffer. We need to flush the buffer
 * before we proceed */
#include<stdio.h>
#include<stdlib.h>
int main()
{
#if 0
	int i;
	printf("enter a number:");
	if(scanf("%d",&i) == 0){
		printf("Error\n");
	}
	return 0;
#endif
	int number;
	char c = '0';
	if (scanf("%d", &number) == 0) {
		printf("Err. . .\n");
		do {
			c = getchar();
		}while (!isdigit(c));
		ungetc(c, stdin);
		//consume non-numeric chars from buffer
		return 0;
	}
}

