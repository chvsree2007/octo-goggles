#include<stdio.h>
#include<stdlib.h>
struct test{
	int a;
	float b;
};
int main()
{
	struct test *ptr;
	ptr = (struct test *) malloc(sizeof(struct test));
	ptr->a =20;
	ptr->b =2.0;
	printf("values of varibale are %d %f",ptr->a, ptr->b);
	free(ptr);
	return 0;
}
#if 0
#include<stdlib.h>
#include <stdio.h>
struct course
{
   int marks;
   char subject[30];
};
int main()
{
   struct course *ptr;
   int i, noOfRecords;
   printf("Enter number of records: ");
   scanf("%d", &noOfRecords);
   // Allocates the memory for noOfRecords structures with pointer ptr pointing to the base address.
   ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));
   for(i = 0; i < noOfRecords; ++i)
   {
       printf("Enter name of the subject and marks respectively:\n");
       scanf("%s %d", &(ptr+i)->subject, &(ptr+i)->marks);
   }
   printf("Displaying Information:\n");
   for(i = 0; i < noOfRecords ; ++i)
       printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
   return 0;
}
#endif