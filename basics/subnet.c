#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void calc_mask(int);
int mask;
int main()
{
	char sub[16] = "255.255.0.0";
	char *token = strtok(sub,".");
	int octet;
	while (token != NULL)
	{
		//printf("%s\n", token);
		sscanf(token, "%d", &octet);
		//printf("%d\n", octet);
		calc_mask(octet);
		token = strtok(NULL, ".");
    	}
	printf("mask %d\n",mask);	
	return 0;
}

void calc_mask(int num)
{
	int temp;
	while(num)
	{
		mask += num &1;
		num >>= 1;
	}

}
