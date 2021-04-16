//19.Write a program to read n numbers from keyboard in to an array. Pass this array to a function which 
//	finds and displays the sum of even numbers only and the product of odd numbers only.

#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,diff,sum;
	for(i=0;i<10;i++)
	{
		printf("Enter a number : ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		   sum= arr[i]+arr[i];
		 else
		    diff = arr[i]+arr[i];
	}
	printf("\n\nData contain %d even and %d odd numbers",sum, diff);
	getch();
	return 0;
}
