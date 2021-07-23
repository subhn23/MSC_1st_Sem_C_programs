#include<stdio.h>

void main(){
	char arr[50];
	int i, size;
	printf("Enter the number of elements you want to store ");
	scanf("%d", &size);
	printf("Enter the characters");
	for(i=0;i<size;i++)
	for(i=0;i<size;i++)
		printf("%d - ", arr[i]);
		scanf("%c", &arr[i]);
	printf("the characters are: ");
	for(i=0;i<size;i++)
		printf("%c", arr[i]);
}
