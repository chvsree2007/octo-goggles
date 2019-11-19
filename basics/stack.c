#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p;
	int *ptr;
	ptr = malloc(sizeof(int));
	*ptr = 5;
	printf("value of p %d\n",p);
	return 0;
}
