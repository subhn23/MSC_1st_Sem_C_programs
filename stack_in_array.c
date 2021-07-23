//program to perform all the operations on stack
#include<stdio.h>
#include<stdlib.h>

#define size 50

int arr[size],i, element;
int top = -1;

int is_empty(){
	if(top == -1)
	return 1;
	else
	return 0;
}

int is_full(){
	if(top == size-1)
	return 1;
	else
	return 0;
}

void push(int element){
	if(is_full()==1)
	printf("Stack is full. Can\'t insert element\n");
	else{
		top++;
		arr[top]=element;
	}
}

void pop(){
	if(is_empty() ==1)
	printf("Stack is empty. Nothing to delete\n");
	else{
		printf("Element removed from stack is %d ", arr[top]);
		top--;
	}
}

void peek(){
	if(is_empty()==1)
	printf("Stack is empty. Nothing to show\n");
	else
	printf("Element at the top of the stack is %d", arr[top]);
}

void display(){
	if(is_empty()==1)
	printf("Stack is empty. Nothing to show\n");
	else{
		for(i=0;i<=top;i++){
			printf(": %d :",arr[i]);
		}
	}
	
}

void main(){
	while(1){
		printf("Press 1 to push element to stack\n");
		printf("Press 2 to pop element from stack\n");
		printf("Press 3 to display the stack\n");
		printf("Press 4 to peek element from stack\n");
		printf("Press 0 to exit\n");
		int choice, data;
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the element you want to push\n");
					scanf("%d", &element);
					push(element);
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: peek();
					break;
			case 0: exit(0);
			default: printf("Invalid input\n");
					break;
		}
	}
}
