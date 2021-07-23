#include<stdio.h>

void main(){
	int a_matrix [30] [30];
	int i, j, x, y;
	
	printf("Enter the horizontal size of array you want: \n");
	scanf("%d", &x);
	printf("Enter the vertical size of array you want: \n");
	scanf("%d", &y);
	
	printf("Enter the elements\n");
	for (i=0;i<y;i++){
		for(j=0;j<x;j++){
			printf("%d, %d :", j,i);
			scanf("%d",&a_matrix[j][i]);
		}
	}
	printf("The matrix is:");
	for (i=0;i<y;i++){
		for(j=0;j<x;j++){
			printf("%d %d\n",a_matrix[j][i]);
		}
	}
}
