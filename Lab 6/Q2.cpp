//Q2.Write a program that accept a string from user and display the content in upper case using and without using string handling function
#include <stdio.h>

int stringUpr(char *s);
 
int main()
{
    char str[100];
 
	printf("Enter any string : ");
    scanf("%[^\n]s",str);//read string with spaces
    
    stringUpr(str);
    printf("String after stringUpr : %s\n",str);
    return 0;
}
 
int stringUpr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        ++i;
    }
}

