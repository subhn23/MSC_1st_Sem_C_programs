//program to sort an array of strings alphabetically
#include<stdio.h>
#include<string.h>
void main(){
	char names[5][30], temp[30];
	int i,j;
	
	for(i=0;i<5;i++){
		printf("Enter name %d: ", i);
		fgets(names[i], sizeof(names[i]), stdin);
	}
	
	printf("The names are :  \n" );
	
	for(i=0;i<5;i++){
		printf("Name %d: ", i);
		puts(names[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(strcmp(names[i], names[j])>0){
				strcpy(temp,names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	
	printf("The sorted names are: \n");
	
	for(i=0; i<5;i++){
		puts(names[i]);
	}
}
