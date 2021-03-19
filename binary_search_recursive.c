//program to implement binary search using recursive method
int search(int array[], int start, int end, int element){
	while(start<=end){
		int middle = start +(end-start)/2;
		if(array[middle] == element){
			return middle;
		}else if(array[middle]>element)
			return search(array,0,middle-1,element);
		else
			return search(array, middle+1,end,element);
	}
	return -1;
}


void main(){
	int i, j, a, n, number[100], element;
	
	printf("Enter the number of element you want to insert to the array: \n");
	
	scanf("%d", &n);
	
	printf("Enter the numbers: \n");
	 for(i=0; i<n;i++)
	 scanf("%d", &number[i]);
	
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(number[i]>number[j]){
				a = number[i];
				number[i]= number[j];
				number[j]=a;
			}
		}
	}
	
	printf("The sorted array is : ");
	
	for(i=0;i<n;i++)
	printf(": %d :", number[i]);
	
	printf("\nEnter the element you want to search: \n");
	scanf("%d", &element);
	int found_index = search(number, 0, n-1, element);
	if(found_index == -1)
	printf("Element not found in the array");
	else
	printf("Element %d found at position %d",element, found_index);
}
