//8.	Write a program to read 10 numbers and reorders them in ascending order using function.
#include<stdio.h>
int ascen(int a, int b)
{
	int temp,arr[10],i,j,asc;
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
	return asc;
}
int  main()
{
	int arr[10],i,asc,j,a,b;
	printf("Enter any 10 numbers:\t");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	asc=ascen(a,b);
	return 0;
}

