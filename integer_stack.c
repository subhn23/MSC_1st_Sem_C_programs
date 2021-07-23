#include <stdio.h>
#include <stdlib.h>
int arr[100], top = -1, data, size = 0;
void push(int data);
void pop();
void peek();
void disply();
int isFull();
int isEmpty();
int main()
{
    int no;
    while (1)
    {
        printf("*****************************************\n");
        printf("Enter your Choice\n");
        printf("Enter 0 for Exit...\n");
        printf("Enter 1 for Push() Operation...\n");
        printf("Enter 2 for Pop() Operation...\n");
        printf("Enter 3 for disply() Opertion...\n");
        printf("Enter 4 for Peek() Opertion...\n");
        scanf("%d", &no);
        size++;
        switch (no)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("Enter Data:");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            disply();
            break;
        case 4:
            peek();
            break;
        default:
            printf("Invalid Choice...");
        }
    }

    return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack is Already Full...");
    }
    else
    {
        top++;
        arr[top] = data;
    }
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack is Empty...");
    }
    else
    {
        printf("Deleted value is %d\n", arr[top]);
        top--;
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("Stack UnderFlow..");
    }
}
void disply()
{
    int i;
    if (isFull())
    {
        printf("Stack is Full");
    }
    else
    {
        printf("The Given Number are:\n");
        for (i = 0; i <= top; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}
int isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
