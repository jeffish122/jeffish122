#include<stdio.h>
#include<conio.h>
long int rfact(int);
int power(int, int);
int main()
{
	int n,i,x;
	float sum;
	printf("Enter number of terms:\n");
	scanf("%d",n);
	printf("Enter value of x");
	scanf("%d",x);
	for (i=1;i<=n;i++)
	{
		sum=sum+power(n,x)/rfact(i);
	}
	printf("Sum of series:%.2f",sum);
}

long int rfact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*rfact(n-1);
}
