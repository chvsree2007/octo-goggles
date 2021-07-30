#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 0
	unsigned int a = 6;
	int b = -20;
	//(a+b > 6) ? printf(“> 6”) : printf(“<= 6”);
	if ((a+b > 6)) 
		printf("6 is more"); 
	else 
		printf("6 is less");
//	printf("%d\n", a+b);
	//int i=10;
	//int *ptr =&i;
	//printf("*ptr * *ptr %d\n", *ptr * *ptr);
	int a = 5, b = 7, c;
	c = a+++b;
	printf("c is %d\n",c);
#endif
	char *ptr;
	if ((ptr = (char *)malloc(0)) == NULL) 
	{
		printf("Got a null pointer");
	}
	else 
	{
	   printf("Got a valid pointer");
	}
}
