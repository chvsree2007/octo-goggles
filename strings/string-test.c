#include<stdio.h>
#include<string.h>
int main()
{
	char *rep, *new,*token;
	char main[] ="hello how are you how do you are";
	printf("%s\n",main);
	token = strtok(main," ");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL," ");
	}
	return 0;
}
