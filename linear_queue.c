//program to implement linear queue in c
#include <stdio.h>
#include <stdlib.h>

#define size 5

int rear = -1;
int front = -1;
int que[size];
int i, element;

int isFull()
{
    if (rear == size - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (front == -1 && rear == -1)
        return 1;
    else
        return 0;
}

void insert(int data)
{
    if (isFull() == 1)
    {
        printf("Queue is full. Can\'temp insert value\n");
    }
    else
    {
        rear++;
        que[rear] = element;
        if (front == -1)
            front = 0;
    }
}

void delete ()
{
    if (isEmpty() == 1)
        printf("Queue is empty. Nothing to delete\n");
    else
    {
        printf("Element deleted : %d", que[front]);
        if(front == rear){
            front = -1;
            rear = -1;
        }else
        front++;
    }
    printf("\n");
}

void display()
{
    if (isEmpty() == 1)
    {
        printf("Queue is empty. Nothing to display\n");
    }
    else
    {
        printf("The queue is :\n");
        for (i = front; i <= rear; i++)
        {
            printf(" :%d: ", que[i]);
        }
        printf("\n");
    }
}

void main()
{
    while (1)
    {
        printf("Press 1 to insert element to queue\n");
        printf("Press 2 to delete element from queue\n");
        printf("Press 3 to display the queue\n");
        printf("Press 0 to exit\n");
        int choice, data;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to push\n");
            scanf("%d", &element);
            insert(element);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid input\n");
            break;
        }
    }
}
