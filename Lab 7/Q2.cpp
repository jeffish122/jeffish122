//Q2.Write a program to find the sum of all the elements of an array using pointer.

#include <stdio.h>
 
int main()
{
	static int array[5] = { 200, 400, 600, 800, 1000 };
	int sum;
 
  	int num(int *ptr);
    sum = num(array);
 
        printf("Sum of all array elements = %5d\n", sum);
 
}
 
int num(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++) 
        {
		total += *(ptr + index);
	}
	return(total);
 
}
