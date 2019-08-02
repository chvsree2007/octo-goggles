#include<stdio.h>
#include<stdint.h>

struct student{
	char name[20];
	uint32_t rollno;
	uint32_t marks;
};

int main()
{
	uint32_t i;
	struct student s[3];
	for(i = 0; i < 3; i++){
		printf("enter the student name:");
		scanf("%s",s[i].name);
		printf("Enter roll no:");
		scanf("%u",&s[i].rollno);
		printf("Enter marks:");
		scanf("%u",&s[i].marks);
	}
	printf("\nStudents details\n");
	printf("------------------\n");
	for(i = 0; i < 3; i++){
		printf("Student %d\n",i+1);
		printf("Name: %s\n",s[i].name);
		printf("Roll no: %u\n",s[i].rollno);
		printf("Marks: %u\n\n",s[i].marks);
	}
	return 0;
}

