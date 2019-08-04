#include<stdio.h>
#include<stdlib.h> /* For malloc() and free()*/
#include<string.h>
//#include<unistd.h> /* */
//int main()
//{
//	const char s[8]="1 2 3 4";
//	unsigned long long out = strtoull(&s,NULL,0);
//	printf("%d\n",out);
//	return 0;
//}
struct test{
	char name[10];
	unsigned int rollno;
	unsigned int marks;
};
int main()
{
	struct test *ptr;
	ptr = (struct test *)malloc(1*sizeof(struct test));
	/* ptr->name = "Sreekanth"; Not allowed */
	strcpy(ptr->name, "Sreekanth"); /* We should copy char by char or use strcpy() */
	/* printf("enter the name:"); scanf("%s",ptr->name); Allowed */
	/* printf("enter the Roll no:"); scanf("%d",&ptr->rollno); */
	ptr->rollno = 101;
	ptr->marks = 555;
	printf("Name: %s\n",ptr->name);
	printf("Roll no: %d\n",ptr->rollno);
	printf("Marks: %d",ptr->marks);
	free(ptr);		
	return 0;
}

