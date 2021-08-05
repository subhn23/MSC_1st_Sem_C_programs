//Implementation of Bubble sort in an array

#include <stdio.h>
//swapping elements using third variable
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//? A function to implement bubble sort an array

void bubbleSortArray(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

//? Function to print an array 

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

//? implementation of bubble sort
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSortArray(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
