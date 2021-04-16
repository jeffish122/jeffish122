//7.	Write a program that asks user to enter 10 numbers and sorts them in an ascending order and display the sorted number.

#include<stdio.h>

int main()
{
	int arr[10],i,asc,dsc,temp,num,j;
	printf("Enter any 10 numbers:\t");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Ascending:\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
		printf("%d\t",arr[i]);
	}
	
	printf("\nDescending:\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
		printf("%d\t",arr[i]);
	}	
}
