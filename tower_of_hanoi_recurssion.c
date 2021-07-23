//program to perform tower of hanoi using recursion
#include<stdio.h>
void toh(int n, char source, char destination, char intermediate){
	if(n==1)
	printf("Move disk 1 from %c to %c\n", source, destination);
	else{
		toh(n-1,source, intermediate, destination);
		printf("Move disk %d from  %c to %c \n", n, source, destination);
		toh(n-1, intermediate, destination,source);		
	
	}
}

void main(){
	int n;
	char a='A', b='B', c='c';
	printf("Enter the number of disk \n");
	scanf("%d", &n);
	toh(n, a,b,c);
}
