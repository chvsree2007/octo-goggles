#include <stdio.h>
#include <stdlib.h>
 
/* _Exit does not call functions registered with atexit. */
void f1(void)
{
    puts("pushed first");
}
 
void f2(void)
{
    puts("pushed second");
}

#if 0 
int main(void)
{
    printf("Enter main()\n");
    atexit(f1);
    atexit(f2);
    fflush(stdout);   /* _Exit may not flush unwritten buffered data */
    _Exit(0);
}
#endif

#if 0
int main(void)
{
    printf("Enter main()\n");
    atexit(f1);
    atexit(f2);
    exit(0);
}
#endif 

int main(void)
{
    printf("Enter main()\n");
    _Exit(0);
//    return 0;
}

