//program to create an array of strings, enter the values and display it

#include<stdio.h>

void main(){
	char lines[20][20];
	int ln, i;
	printf("Enter number of lines:");
	scanf("%d", &ln);
	printf("\n");
	
	for(i=0;i<ln;i++){
		printf("Enter line %d ", (i+1));
		scanf("%s", &lines[i][0]);
	}
	
	printf("The lines are: \n");
	
	for(i=0;i<ln;i++){
		printf("\nLine %d is %s", (i+1), lines[i]);
	}
	
}
