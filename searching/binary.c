/*Binary Search: Search a sorted array by repeatedly dividing the search interval in half. 
 * Begin with an interval covering the whole array. If the value of the search key is less 
 * than the item in the middle of the interval, narrow the interval to the lower half. 
 * Otherwise narrow it to the upper half. Repeatedly check until the value is found or 
 * the interval is empty.
 * Using Recursion, O(Logn) is the Time Complexity.
 */
#include<stdio.h>
int binarySearch(int arr[], int start, int end, int x);

int binarySearch(int arr[], int start, int end, int x)
{
	int mid;
	if(end >= start){
		mid = start + (end-start)/2;
		//printf("mid %d , arr[mid] %d\n",mid, arr[mid]);
		if(arr[mid] == x)
			return mid;
		if(arr[mid] > x)
			return binarySearch(arr, start, mid-1, x);
		else
			return binarySearch(arr, mid+1, end, x);
	}
	return -1;
}
int main()
{
	int arr[] = {12,23,44,100,140};
	int size = sizeof(arr) / sizeof(arr[0]);
	int se = 23;
	int ret = binarySearch(arr, 0, size - 1, se);
	(ret == -1)?printf("Element not found in the array\n")
		: printf("Element %d present at position %d\n",se,ret+1);
	return 0;
}
