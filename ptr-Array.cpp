#include<stdio.h>
int main()
{
	int i;
	int a[5]={11,22,33,44,55};
	int *ptr;
	ptr = a;
	int (*ptrarr)[5];
	ptrarr = &a;
	for(i=0; i<5; i++)
		printf("%d\n",ptrarr[i]);
	return 0;
}
