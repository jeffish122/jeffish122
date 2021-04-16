//14.	Write a program to read two m*n matrices and display their sum and difference.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3], b[2][3];
	int i,j,sum;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=a[i][j]+b[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}
}
