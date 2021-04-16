//10.	Write a program that accepts marks of BIM-I semester students in C-programming (say we have 24 students in BIM-I semester).
//Find and print how many students failed (pass marks is 25) and how many achieved distinction (45 above is considered distinction.)

#include<stdio.h>
int main()
{
	int arr[24];
	int *pa;
    int  i;
     
    pa=&arr[0];
     
    printf("Enter marks of 24 students in BIM-I semester\n");
    printf("FM:75\n");
    for(i=0;i < 24; i++){
        printf("Enter marks of %01d student: ",i+1);
        scanf("%d",pa+i);
    }
    
    for(i=0;i<24;i++)
	{
		if(arr[i]>=70)
		{
			printf("The %d student is: ",i);
			printf("Distinction\n");
			
		}
		else if(arr[i]>=25)
		{
			printf("The %d student is: ",i);
			printf("Pass\n");
		}
		else
		{
		printf("The %d student is: ",i);
		printf("Fail\n");
		}
	}
	
}
