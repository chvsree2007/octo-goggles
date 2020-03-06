#include<stdio.h>
#include<string.h>
int main()
{
	char *main, *rep, *new,*token;
	main ="hello-how-are-you-how-dod-you-are";
	printf("%s\n",main);
	token = strtok(main,"-");
	if(!token)
		printf("%s\n",token);
/*	while(token!=NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL,"-");
	}*/
	return 0;
}
