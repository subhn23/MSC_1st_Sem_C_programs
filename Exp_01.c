//! Q. Define an integer array, assign values and displa all elements.

#include <stdio.h>
int main()
{
    int no, arr[100], i;
    printf("Enter number of elements to be inserted to the array: ");
    scanf("%d", &no);
    printf("\nEnter %d elements\n", no);
    for (i = 0; i < no; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    printf("The following elements are present in the array:");
    for(i=0;i<no;i++){
        printf("\narr[%d] = %d",i,arr[i]);

    }
    return 0;
}