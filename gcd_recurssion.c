//program to find the greatest common divisor or HCF using recurssion
#include<stdio.h>

int gcd(int num1, int num2){
	if(num2 != 0){
		return gcd(num2, num1 % num2);
	} else
	return num1;
}

void main(){
	int num1, num2, result;
	printf("Enter 2 numbers to find their GCD : \n");
	scanf("%d %d", &num1, &num2);
	result = gcd(num1, num2);
	printf("GCD of %d and %d is %d", num1, num2, result);
}
