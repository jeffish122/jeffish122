#include<stdio.h>
#include<conio.h>
long int rfact(int);
int main()
{
	int num=5;
	long int f=1;
	
	f=rfact(num);
	printf("Factorial=%ld",f);
	
}

long int rfact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*rfact(n-1);
}
