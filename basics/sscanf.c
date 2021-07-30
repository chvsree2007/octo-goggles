#include <stdio.h>
int main()
{
	char *contents = "content=0&website=Google";
	char arg[100] = {0};
	char value[100] = {0};
	sscanf(contents, "%[^&]&%s", arg, value);
	printf("%s\n%s\n", arg, value);
	return 0;
}
