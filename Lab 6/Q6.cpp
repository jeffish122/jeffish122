//Q6.Write a program that accept the string and display it in reverse order using and without using strrev( ) function

#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
