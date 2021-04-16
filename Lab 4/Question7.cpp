#include<stdio.h>
#include<conio.h>
long factorial(int);
int main()
{
	int a;
	printf("\nEnter a number:");
	scanf("%d", &a);
	
	
	printf("\nThe factorial of the %d number is %d", a,factorial(a));
	return 0;
}
long factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	return (n * factorial(n-1));
}
