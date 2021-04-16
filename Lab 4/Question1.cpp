#include<stdio.h>
int add(int, int);
int sub(int, int);
int div(int, int);
int mul(int, int);

int main()
{
	int a,b,sum,diff,division,multiply;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	sum= add(a,b);
	printf("The sum is %d",sum);
	
	diff= sub(a,b);
	printf("\nThe substraction is %d",diff);
	
	division= div(a,b);
	printf("\nThe division is %d",division);
	
	multiply= mul(a,b);
	printf("\nThe mulplication is %d",multiply);
	return 0;
	
}
int add(int a, int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int sub(int a, int b)
{
	int diff;
	diff=a-b;
	return diff;
}
int div(int a, int b)
{
	int division;
	division=a/b;
	return division;
}
int mul(int a, int b)
{
	int multiply;
	multiply=a*b;
	return multiply;
}
