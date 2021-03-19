//program to find the factorial of a number using recurssion

#include<stdio.h>

int factorial(int num){
	if(num==0){
	return 1;
	}  else
	return num * factorial(num-1);
}

void main(){
	int num, fact;
	printf("Enter a number a find its factorial:\n");
	scanf("%d",&num);
	fact = factorial(num);
	printf("factorial of %d is %d", num, fact);
}
