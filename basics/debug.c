#include <stdio.h>
#include <stdlib.h>

//#define DEBUG
//#define DEBUGP(fmt, ...) fprintf(stderr,fmt,__VA_ARGS__)

int debug =0;
int process(int i, int j);

#define DEBUGP(level,fmt, ...) if(debug >= level) \
		fprintf(stderr,fmt,__VA_ARGS__)

int process(int i, int j){
    DEBUGP(2,"Inside process\n");
    return i+j;
}

int main()
{
    int i,j,nread,result;
    debug =1;
    printf("enter 2 integers to add:");
    nread = scanf("%d %d",&i,&j);
    result = process(i,j);
    DEBUGP(1,"After process() call\n");
    #ifdef DEBUG
        printf("result Sum is %d\n",result);
    #endif

    DEBUGP(1,"Result Sum is %d\n",result);
    return 0;
}

