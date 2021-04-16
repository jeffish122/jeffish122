

#include <stdio.h>
 
int stringLwr(char *s);
 
int main()
{
    char str[100];
 
	printf("Enter any string : ");
    scanf("%[^\n]s",str);//read string with spaces
    
    stringLwr(str);
    printf("String after stringLwr : %s\n",str);
}

int stringLwr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        ++i;
    }
}

