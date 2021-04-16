#include<stdio.h>
#include<conio.h>
int checkPrime(int);
int main()
{
	int num,status;
	printf("Enter a number:");
	scanf("%d",&num);
	
	status=checkPrime(num);
	if(status==2)
		printf("prime number");
	else
		printf("Not prime number");
	getch();
}
int checkPrime(int n)
{
	int i,count=0;
	for (i=1;i<=n;i++)
	{
	if(n%i==0)
		count++;
	}
		return count;
}
