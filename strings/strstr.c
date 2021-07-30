/*strstr( ) function returns pointer to the first occurrence of the string str2 in a given string str1. 
 * Syntax for strstr( ) function is: char *strstr(const char *str1, const char *str2);
 */

#include <stdio.h>
#include <string.h>
int main ()
{
	char string[55] ="This is a test string for testing";
	char *p;
	p = strstr (string,"test");
	if(p)
	{
		printf("string found\n" );
		printf ("First occurrence of string \"test\" in \"%s\" is"\
			" \"%s\"",string, p);
	}
	else
		printf("string not found\n" );
	return 0;
}
