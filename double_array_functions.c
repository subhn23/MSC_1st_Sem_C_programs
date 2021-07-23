#include <stdio.h>
void enterArray(double arr[])
{
    int i;
    printf("Enter Array element:");
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]:", i);
        scanf("%lf", &arr[i]);
    }
}
void displyArray(double arr[])
{
    int i;
    printf("GivenArray element:");
    for (i = 0; i < 5; i++)
    {
        printf("\n%lf", arr[i]);
    }
}
int main()
{
    double arr[5];
    enterArray(arr);
    displyArray(arr);
    return 0;
}