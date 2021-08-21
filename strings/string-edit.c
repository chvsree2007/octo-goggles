#include <stdio.h>
#include <string.h>

void replace(char *orig,char *replace);
int main()
{
	char *original = "hello how do you how do you do";
	//char original[] = "hello how do you how do you do";
	printf("original string %s\n",original);
	//replace(original,"do");
	
	char *temp = strstr(original, "do");
	//if(temp)
	//   strcpy(temp,"does");
	printf("changed string %s\n",original);
}
void replace(char *orig,char *replace)
{
	char *temp;
	temp = strstr(orig,replace);
	if(temp)
	{
		printf("%s\n",temp);
		//strcpy(temp,"hi");
	}
#if 0
	temp = strtok(*orig,"");
	while(temp != NULL)
	{
		printf("%s\n",temp);
		strtok(NULL," ");	
	}	
#endif
}
