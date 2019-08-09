/*Evevry time we print argc address changes Address Space Layout Randomisation of stack
 * causes this to print random values cat /proc/sys/kernel/randomize_va_space is set 
 * to 1/2 means randomization disabled
 * If it is set to 0 then Randomisation is disabled*/
#include <stdio.h>

int main(int argc, char *argv[])
{
        printf("Argc Address:%p\n", &argc);
        return 0;
}

