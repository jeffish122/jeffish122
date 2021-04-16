//11.	Twenty-five numbers are entered through the keyboard into an array.
// Write a program to find out how many of them are positive, how many are negative, how many are even and how many are odd.


#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[25],i,even=0, odd=0;
	for(i=0;i<25;i++)
	{
		printf("Enter a number : ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<25;i++)
	{
		if(arr[i]%2==0)
		   even++;
		 else
		    odd++;
	}
	printf("\n\nData contain %d even and %d odd numbers",even, odd);
	getch();
	return 0;
}
