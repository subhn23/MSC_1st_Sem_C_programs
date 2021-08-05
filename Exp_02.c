//! Q. Define a double array of size 5 declare two function enterArray and
//!    displayArray to initialize and display array element respectively.

#include <stdio.h>

void enterArray(double arr[])
{
    int i;
    printf("Enter 5 Array Elements\n");
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%lf", &arr[i]);
    }
}

void displayArray(double arr[])
{
    int i;
    printf("Folowing elements are present in the array\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%lf", arr[i]);
    }
}

int main()
{
    double arr[5];
    enterArray(arr);
    displayArray(arr);
    return 0;
}