//program to find the length of a string without using strlen function

#include<stdio.h>
/*
void main(){
	char str[] = "Hello";
	int i, count = 0;
	
	for(i=0;i<30;i++){
		if(str[i]!= '\0'){
			count++;
		}
		else
		break;
	}
	printf("Length is %d", count);
}
*/

void main(){
	char str[] = "Welcome";
	int i, count = 0;
	
	while(str[count] != '\0'){
		count++;
	}
	printf("Length is %d", count);
}
