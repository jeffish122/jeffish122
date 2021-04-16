//16.	Write a program to read marks of 10 students and print out the top five.

#include<stdio.h>
int main()
{
	int arr[10];
	int *pa;
    int  i;
     
    pa=&arr[0];
     
    printf("Enter marks of 10 students\n");
    printf("There must be any Five topper\n\n");
    printf("F.M=100\n");
    for(i=0;i < 10; i++){
        printf("Enter marks of %01d student:",i+1);
        scanf("%d",pa+i);
    }
    
    for(i=0;i<10;i++)
	{
		if(arr[i]>=80)
		{
			printf("\n\nThe %d student is: ",i);
			printf("Topper\n");
			
		}
		
	}
	
}
