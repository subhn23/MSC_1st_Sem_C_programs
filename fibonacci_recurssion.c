//program to get the fibonacci series using recurssion
#include<stdio.h>

int fib(int n){
	if(n==1){
		return 0;
	} else if(n==2){
		return 1;
	} else{
		printf("%d", fib(n-1)+fib(n-2) );
		return fib(n-1)+fib(n-2);
	}
}

void main(){
	int num;
	printf("Enter a number to get its fibonacci series: \n");
	scanf("%d", &num);
	int result = fib(num);
	printf("Result is %d", result);
}
