//5.	Write a program that asks user to enter 10 numbers, read them into an array and finds the sum, product,
//average and maximum of all numbers and prints them.

#include<stdio.h>
int main()
{
	int arr[10],i;
	int sum=0, product,maximum;
	float avg=0;
	printf("Enter any 10 numbers:\t");
	
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<10;i++)
		sum=sum+arr[i];
	
	printf("The sum of numbers is %d\n",sum);

	
	for(i=0;i<10;i++)
		avg=sum/10.0;
	
	printf("The avg of numbers is %.2f\n",avg);
		
	for(i=0;i<10;i++)
		product=product*arr[i];
	
	printf("The product of numbers is %d\n",product);

}
