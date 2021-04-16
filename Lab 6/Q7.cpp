//Q7. Write a program that accept a string and display its ascii value.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");

    scanf("%c", &ch);

    printf("ASCII value of character %c is: %d", ch, ch);
    return 0;
}
