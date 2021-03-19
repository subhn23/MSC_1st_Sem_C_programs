//write a recursive program to find x to the power of y
#include<stdio.h>
int pow(int x, int y){
	if(y==1)
		return x;
	else
		return x*pow(x,y-1);
}

void main(){
	int base, power, result;
	printf("Enter numbers a and b to find a to the power of b: \n");
	scanf("%d %d", &base, &power);
	result = pow(base, power);
	printf("Result is: %d", result);
}
