//! Q. Declare an integer array, perform linear search and
//!    return the index of the search element
//!    if it is found, otherwise return -1.

#include <stdio.h>

void enterArray(int arr[], int no)
{
    int i;
    printf("Enter %d Array Elements\n", no);
    for (i = 0; i < no; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int no)
{
    int i = 0;
    printf("Folowing elements are present in the array\n");
    for (i = 0; i < no; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

int searchFun(int arr[], int no, int search)
{
    int i;
    for (i = 0; i < no; i++)
    {
        if (search == arr[i])
            return i;

        else
            return -1;
    }
}

int main(){
    int no, arr[100], i, search, val;
    printf("Enter number of elements to be inserted to the array\n");
    scanf("%d",&no);
    enterArray(arr, no);
    displayArray(arr, no);
    printf("\nEnter the search element: ");
    scanf("%d", &search);
    val = searchFun(arr, no, search);
    if(val == -1){
        printf("The given element %d is not present in the array.", search);
    }
}