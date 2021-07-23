//program to reverse a string using recursion

#include<stdio.h>
#include<string.h>

void rev (char str[], int size){
	
	if(size>0){
		printf("%c", str[size-1]);
		size--;
		rev(str,size);
	}
	
}

void main(){
	char str[30];
	printf("Enter a string: \n");
	fgets(str,sizeof(str),stdin);
	printf("Reverse is:\n");
	rev(str, strlen(str)-1);
}


