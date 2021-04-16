#include<stdio.h>
int greater(int, int, int);
int main()
{
	int a,b,c,great;
	printf("Enter any three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	great=greater(a,b,c);
}
int greater(int a, int b, int c)
{
	int great;
	if(a>b && a>c)
	{
	printf("%d is greater",a);	
	}
	else if(b>a && b>c)
	{
		printf("%d is greater",b);
	}
	else if(c>a && c>b)
	{
		printf("%d is greater",c);
	}
	else{
		printf("None");
	}
	return great;
}

