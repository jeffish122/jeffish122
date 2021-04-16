//Q1.Write a program to find length of string input from user using and without using library function strlen( )
#include <stdio.h>
int main()
{
    char str[100],i;
    printf("Enter a string: \n");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of input string: %d",i);
    
    return 0;
}
