//17.	Write a program to copy contents of one array into another in reverse order.
#include <stdio.h>
 
void printArray(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int original_arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(original_arr)/sizeof(original_arr[0]);
 
    int copied_arr[len], i, j;

    for (i = 0; i < len; i++) {
        copied_arr[i] = original_arr[len - i - 1];
    }
 
    printf("\nOriginal array: ");
    printArray(original_arr, len);
 

    printf("\nResultant array: ");
    printArray(copied_arr, len);
 
    return 0;
}
