#include<stdio.h>

long power(int , int);

int main()
{
	int a,b;
	long p;
	printf("Enter value of a and b:\n");
	scanf("%d%d",&a,&b);
	p=power(a,b);
	printf("Power = %ld",p);
	return 0;
}

long power(int a, int b)
{
	if(b==1)
	return a;
	else
	return (a * power(a,b-1));
}
