#include<stdio.h>
#include<math.h>

void main(){
	double arr[50];
	int i, size;
	
	printf("Enter the number of element you want to store\n");
	scanf("%d", &size);
	
	printf("Enter the elements");
	
	for(i=0;i<size;i++){
		printf("\nValue of arr[%d] - ", i);
		scanf("%lf", &arr[i]);
	}
	
	for(i=0;i<size;i++){
		arr[i] = pow(arr[i], 2);
	}
	
	printf("The elements after powering the array are \n");
	
	for(i=0;i<size;i++){
		printf("\narr[%d] - %lf", i, arr[i] );
	}
}
