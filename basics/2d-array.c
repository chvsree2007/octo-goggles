#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][5]= {{1,3,4,5,6},{2,4,6,8,10},{1,3,5,7,9}};
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
