 #include<stdio.h>
#include<conio.h>
float product(int, float);
int main()
{
	double num1, num2, prod;
	
	printf("Enter an int and a float:");
	scanf("%lf %lf",&num1,&num2);
	
	prod=product(num1,num2);
	printf("Product=%.2lf",prod);
	}
float product (int x, float y)
{
	double prod;
	prod= x * y;
	return prod;
}
