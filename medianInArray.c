#include<stdio.h>

void find_median(int num_arr[], int array_size){
	if(array_size%2 != 0){
		printf("\nMedian is %d", num_arr[array_size/2]);
	} else if(array_size%2 == 0){
		
		printf("\nMedian is %d", (num_arr[array_size/2] + num_arr[(array_size/2)-1])/2);
	}
}

void swap_num(int a, int b){
	a = a+b;
	b = a-b;
	a = a-b;
}

void sort_array(int num_arr[], int array_size){
	int i,j;
	for(j=0;j<array_size;j++){		
		for(i=j+1;i<array_size;i++){
			if(num_arr[j]>=num_arr[i]){
				swap_num(num_arr[j], num_arr[i]);
			}
		}
	}
}

void main(){
	int num_arr [30];
	int i, j, array_size;
	
	printf("Enter the size of array you want: \n");
	scanf("%d", &array_size);
	
	printf("Enter %d elements\n", array_size);
	
	for (i=0;i<array_size;i++){
		scanf("%d",&num_arr[i]);
	}
	
	printf("Elements in the array are: \n");
	
	for (i=0;i<array_size;i++){
		printf("%d", num_arr[i]);
	}
	
	//sort_array(num_arr, array_size);
	
	for(j=0;j<array_size;j++){		
		for(i=j+1;i<array_size;i++){
			if(num_arr[j]>num_arr[i]){
				//swap_num(num_arr[j], num_arr[i]);
				num_arr[j] = num_arr[j]+num_arr[i];
				num_arr[i] = num_arr[j]-num_arr[i];
				num_arr[j] = num_arr[j]-num_arr[i];
			}
		}
	}
	
	printf("\nSorted elements in the array are: \n");
	
	for (i=0;i<array_size;i++){
		printf("%d", num_arr[i]);
	}
	
	find_median(num_arr, array_size);
	
}
