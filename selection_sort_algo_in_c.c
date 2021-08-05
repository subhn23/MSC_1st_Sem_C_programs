#include<stdio.h>
 
int main()
{
    int i,j,size,index,temp,min,arr[100];
    printf("Enter the number of elements to be inserted into the array :");
    scanf("%d",&size);
    printf("\nEnter the elements\n");
 
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    for(i=0;i<size-1;i++)
    {
        min=arr[i];
        index=i;
        for(j=i+1;j<size;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                index=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
 
    printf("\nSorted array is as follows\n");
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
 
    return 0;
}

