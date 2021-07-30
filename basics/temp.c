#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{

#if 0
	char *s;
	char tempbuf[SIZE];
	printf("enter a string ");
	//scanf("%ms",&s);
	fgets(tempbuf,SIZE,stdin);
	//s=(char *)malloc()
	printf("entered string is %s",tempbuf);
#endif
	char str[20];
	strcpy(str,"helloworld");
	printf("len %ld\n",strlen(str));
	return 0;
}
