#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while((read = getline(&line, &len, stdin))!= -1)
	{
		printf("line length %zu \n",read);
		printf("%s",line);
	}
	free(line);
	return 0;
}
