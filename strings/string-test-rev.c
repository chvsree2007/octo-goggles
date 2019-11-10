#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[] ="hello how are you how dod you are";
	printf("input - %s\n",input); 
	char key[]="are";

	char *output = malloc(strlen(input));	
	printf("len of input %ld\n",strlen(input));

	const char lim[2]=" ";
	char *token;
	
	token = strtok(input,lim);

	while(token!=NULL)
	{
		printf("%s\n",token);
		if(!strcmp(token,key))
			strcat(output,"era");
		else
			strcat(output,token);
		strcat(output," ");
		token = strtok(NULL," ");
	}
	printf("output - %s\n",output);
	free(output);
	return 0;
}
