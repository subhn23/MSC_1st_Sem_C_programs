//promgram to create an array of 5 names, read those names and print it
#include<stdio.h>
void main(){
	char names[5][30];
	int i;
	
	for(i=0;i<5;i++){
		printf("\nEnter name %d: ", i);
		fgets(names[i], sizeof(names[i]), stdin);
	}
	
	printf("The names are :  \n" );
	
	for(i=0;i<5;i++){
		printf("\nName %d: ", i);
		puts(names[i]);
	}
}
