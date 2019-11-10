/*Program to clear a bit at (pos-1) in a number - XOR is used
To Setr a bit at (pos-1) in a number - OR is used*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num=234,pos = 4;
	int val = 1<<(pos-1);
	printf("intial value %d\n",num);
	printf("pos val %d\n",val);
	printf("final val after pos value Clear %d\n",val^num);
	printf("final val after pos value Set %d\n",val|num);
	return 0;
}
