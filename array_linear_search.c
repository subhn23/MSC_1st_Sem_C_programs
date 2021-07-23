#include <stdio.h>
void EnterArray(int arr[], int no)
{
    int i;
    printf("Enter array elements:");
    for (i = 0; i < no; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}
void disply(int arr[], int no)
{
    int i = 0;
    printf("The given element present in an array:");
    for (i = 0; i < no; i++)
    {
        printf("\narr[%d]=%d", i, arr[i]);
    }
}
int searchfun(int arr[], int no, int search)
{
    int i = 0;
    for (i = 0; i < no; i++)
    {
        if (search == arr[i])
        {
            return i;
        }
    }
}
int main()
{
    int no, arr[100], i, search, val;
    printf("Enter Number of element insert to an array:");
    scanf("%d", &no);
    EnterArray(arr, no);
    disply(arr, no);
    printf("\nEnter search element:");
    scanf("%d", &search);
    val = searchfun(arr, no, search);
    if (val == 0)
    {
        printf("The given element is not present in Array...");
    }
    else
    {
        printf("The given element is present in Array...in index:%d", val);
    }
    return 0;
}