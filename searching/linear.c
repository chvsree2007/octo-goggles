/* The time complexity of Linear Search algorithm is O(n) 
 */

#include<stdio.h>

int linear_search(int arr[], int size, int x);

int main(void){
	int arr[]={1,2,44,56,67,34,21,23};
	int se = 34;
	int ret;
	int size = sizeof(arr)/sizeof(arr[0]);
	//printf("arr size %d\n",size);
	ret = linear_search(arr,size,se);
	if(ret)
		printf("Element %d found at position: %d\n",se,ret);
	else if(ret == -1)
		printf("Element not found\n");
}
int linear_search(int arr[], int size, int x)
{
	int i;
	for(i=0; i < size; i++){
		if(arr[i] == x)
			return (i+1);
	}
	return -1;
}
