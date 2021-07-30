#include <stdio.h>
#include <stdlib.h>

char *getString(void);

int main()
{
#if 0

	char *str;
	/* Stored in read only part of data segment */
	str = "GfG";	

	/* Problem: trying to modify read only memory */
	*(str+1) = 'n'; /* causes Segmenation fault */
	


	char str[] = "GfG";  /* Stored in stack segment like other auto variables */
	*(str+1) = 'n';   /* str[] is stored in writable stack segment. 
			     No problem: String is now GnG */
	printf("%s\n",str);
	getchar();



	int size = 4;
	/* Stored in heap segment like other dynamically allocated things 
	 * Data at str is stored in writable heap segment */
	char *str = (char *)malloc(sizeof(char)*size);
	*(str+0) = 'G';
	*(str+1) = 'f';
	*(str+2) = 'G';
	*(str+3) = '\0';
	*(str+1) = 'n';  /* No problem: String is now GnG */
	printf("%s\n",str);

	printf("%s",getString());



	int a;
	//int a = 1,2,3;
	//a = (1, 2, 3);
	a = 1, 2, 3;
	printf("%d", a);



	int *p;
	printf("%d",*p); /* Causes Segmentation fault - 
			    Uninitialised pointer access  */

	int n = 2;
	scanf("%d",n); /* Passing value to scanf() causes Seg fault*/

	/* allocating memory to p */
	int* p = malloc(8);
	*p = 100;

	/* deallocated the space allocated to p */
	free(p);

	/* core dump/segmentation fault as now this statement is illegal 
	 * Accessing memory that is freed */
	*p = 110;



	 int arr[2];
	 arr[3] = 10;  /* Accessing out of bound */
	
	 
	 int arr[2];
	 arr[3] = 10;  /* Accessing Array's out of bound memory */
#endif
	 int *p;
	 printf("%d",*p); /* Accessing uninitialised pointer causes Segmentation fault */

	return 0;
}

#if 0
char *getString(void)
{
  char *str = "GfG"; /* Stored in read only part of shared segment */

  /* No problem: remains at address str after getString() returns*/
  return str;
}
#endif

