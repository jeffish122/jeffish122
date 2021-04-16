//Q13. Write a program to read names of 10 students and sort them in alphabetical order.

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char name[10][10],temp[10];
int i,j;
printf("Enter Name of 10 Students\n\n");
for(i=0;i<10;i++)
{
printf("input the name of student:");
scanf("%s",name[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
printf("\nNAme in alphabetical order\n");
for(i=0;i<10;i++)
{
printf("%s\n",name[i]);
}
}
