//Q5. Write a program to convert upper case letter into lower case letter using call by address or passing pointer into function

#include <stdio.h>
#include <string.h>
int main()
{
   char string[1000];
   
   printf("Input a string to convert to lower case\n");
   gets(string);
   
   printf("The string in lower case: %s\n", strlwr(string));
   
   return  0;
}
