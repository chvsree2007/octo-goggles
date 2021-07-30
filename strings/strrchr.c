/*strrchr( ) function in C returns pointer to the last occurrence of the character in a given string str1. 
 * Syntax for strrchr( ) function is--> char *strrchr(const char *str, int character);
 * */

#include <stdio.h>
#include <string.h>
int main ()
{
  char string[55] ="This is a string for testing";
  char *p;
  p = strrchr (string,'i');

  printf ("Character i is found at position %d\n",p-string+1);
  printf ("Last occurrence of character \"i\" in \"%s\" is" \
           " \"%s\"",string, p);

   return 0;
}
