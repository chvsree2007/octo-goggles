#include <stdio.h>
#include <stddef.h>
/* #define NULL ((void *)0) Defined in stdio.h */
int main()
{
	int *ptr = NULL;
	printf("Size of *ptr %d\n",sizeof(*ptr));
	printf("Size of ptr %d\n",sizeof(ptr));
	printf("Size of NULL %d\n",sizeof(NULL)); /* Same as size of a pointer/address */
	printf("Size of void %d\n",sizeof(void)); /* Same as size of char */
	printf("Size of void* %d\n",sizeof(void *)); /* Same as size of a pointer/address */
	printf("Size of int %d\n",sizeof(int));
	printf("Size of float %d\n",sizeof(float));
	printf("Size of double %d\n",sizeof(double));
	printf("Size of int* %d\n",sizeof(int *));
	printf("Size of float* %d\n",sizeof(float *));
	printf("Size of double* %d\n",sizeof(double *));
	return 0;
}
