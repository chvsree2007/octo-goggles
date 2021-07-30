#include<stdio.h>
int main()
{
	int num, count =0;
	printf("enter a number to count bits ");
	scanf("%d",&num);
	while(num)
	{
		count += num&1;
		num >>= 1;
	}
	printf("count %d\n",count);
	return 0;
}
