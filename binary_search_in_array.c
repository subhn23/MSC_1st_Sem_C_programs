#include <stdio.h>

void input(int arr[], int no)
{
    int i;
    for (i = 0; i < no; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}
void disply(int arr[], int no)
{
    int i = 0;
    printf("Given Number are present in Array:\n");
    for (i = 0; i < no; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}
void sorting(int arr[], int no)
{
    int i, j, temp;
    printf("Given Number are present in Array After Sorting:\n");
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void search(int arr[], int no)
{
    int i, j, low, high, mid, num, index = 0;
    printf("Enter a Number to Search in Array:");
    scanf("%d", &num);
    low = 0;
    high = sizeof(arr);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            printf("Element found at position %d\n", mid);
            index++;
            break;
        }
        else
        {
            if (arr[mid] < num)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    if (index == 0)
    {
        printf("THE GIVEN ELEMENT IS NOT PRESENT IN ARRAY...");
    }
    else
    {
        printf("THE GIVEN ELEMENT IS PRESENT IN ARRAY...");
    }
}

int main()
{
    int arr[100], no;
    printf("Enter no of element to be present in Array:");
    scanf("%d", &no);
    input(arr, no);
    disply(arr, no);
    sorting(arr, no);
    disply(arr, no);
    search(arr, no);
    return 0;
}