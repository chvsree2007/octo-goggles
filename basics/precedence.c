#include <stdio.h>
int main()
{
#if 0
	int a,b,c;
	a = 10; b=20;
	printf("a+++b %d\n", a+++b);
	printf("a+(++b) %d\n", a+(++b));

	int arr[] = {10, 20};
	int *p = arr;
	++*p;
	printf("arr[0] = %d, arr[1] = %d, *p = %d \n",arr[0], arr[1], *p);

	int arr[] = {10, 20};
	int *p = arr;
    	*p++;
    	printf("arr[0] = %d, arr[1] = %d, *p = %d\n", arr[0], arr[1], *p);

	int arr[] = {10, 20};
	int *p = arr;
	*++p;
	printf("arr[0] = %d, arr[1] = %d, *p = %d\n",arr[0], arr[1], *p);
#endif

	return 0;
}
