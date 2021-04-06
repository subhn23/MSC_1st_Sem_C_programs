#include <stdio.h>
int main()
{
    int no, arr[100], i;
    printf("Enter Number of element insert to an array:");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("The given element present in an array:");
    for (i = 0; i < no; i++)
    {
        printf("\narr[%d]=%d", i, arr[i]);
    }
    return 0;
}