#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hello world";
	printf("str = %s\n",str);
	char *p;
	p = str;
	//strcpy(p,str); cannot modify string literal
	printf("p = %s\n",p);
	return 0;
}
