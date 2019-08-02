#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Factors are:");
	for(i=1;i<=num;i++){
		if(num%i == 0)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}

