#include<stdio.h>
int fib(int n);
int main()
{
	int n, i;
	printf("Enter n:\n");
	scanf("%d",&n);
	
	printf("Fibonacci numbers up to %d terms:\n",n);
	for(i=0;i<=n;i++)
	printf("%d\t",fib(i));
	
}
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else 
	return fib(n-1) + fib(n-2);
}
