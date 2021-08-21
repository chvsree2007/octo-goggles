#include <string.h>
#include <stdio.h>
  
int main()
{
    // Take any two strings
    char s1[] = "Fun with STL";
    char s2[] = "with";
    char* p;
  
    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
  
    // Prints the result
    if (p) {
        //strncpy(p, "WITHHHYYZZ",9); //Works
        //strncpy(p, "WITHHHYYZZA",10); //Doesn't Work
        memcpy(p,"WITHHHYYA",10); //Works
        //memcpy(p,"WITHHHYYAS",10); //Doesn't Works
        //memcpy(p,"WITHH",5); //Doesn't work
	printf("%s", s1);
    } else
        printf("String not found\n");
  
    return 0;
}
