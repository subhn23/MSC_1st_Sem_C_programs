//program to create a user defined function for strcpy
#include<stdio.h>

void strCopy(char destination[], char source[]){
	int i, count = 0;
	while(source[count] != '\0'){
		count++;
	}
	
	for(i=0;i<count;i++){
		destination[i]=source[i];
	}
}

void main(){
	char str1[] = "Welcome";
	char str2[20];
	
	strCopy(str2, str1);

	printf("copied string is  %s", str2);
}
