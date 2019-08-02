//#include<stdio.h>
//int main()
//{
//	int *ptr = NULL;
//	printf("%d\n",*ptr);
//	printf("%d\n",ptr);
//	return 0;
//}

typedef struct t_name{

char *first_name;
char *middle_init;
char *last_name;
}NAME;
NAME my_name,your_name;

int main()
{
char temp[] = "sumit";
printf("Program started\n");
my_name.first_name=temp; // now you can assign value
your_name = my_name;
NAME abc=my_name;
printf("my_name=%s\n",my_name.first_name);
printf("your_name=%s\n",your_name.first_name);
printf("abc=%s\n",abc.first_name);
}
