//3.	Write a program that reads 10 integers from keyboard and displays entered numbers on the screen.
#include<stdio.h>
int main()
{
	int arr[10],i;
	printf("Enter any 10 numbers:\t");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe entered numbers are:\n");
	for(i=0;i<10;i++)
	{
		printf("\narr[%d]=%d",i,arr[i]);
	}
	return 0;
}

