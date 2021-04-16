//6.	Write a program to accept 10 numbers and finds and prints the largest and smallest among those numbers.
#include<stdio.h>

int main()
{
	int arr[10],i, big, small;
	printf("Enter any 10 numbers:\t");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	big = arr[0];
	 
    for(i = 0; i < 10; i++)
    {
        if(big < arr[i])
        {
            big = arr[i];
        }
    }
     printf("\n\nThe largest element is: %d", big);
     
     	
		 
	small = arr[0];
	 
    for(i = 0; i < 10; i++)
    {
        if(small > arr[i])
        {
            small = arr[i]; 
        }
    }
     printf("\n\nThe smallest element is: %d", small);
     
}
