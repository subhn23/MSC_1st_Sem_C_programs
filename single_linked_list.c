#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;
void create(int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void insert_at_beginning(int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->next = head;
    new->data = data;
    head = new;
}

void insert_at_pos(int data, int pos)
{
    int i = 0;
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    Node *temp, *temp1 = head;
    while (i < pos)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = new;
    new->next = temp;
}
void insert_at_end(int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    Node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->next = NULL;
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void reverse_list()
{
    Node *temp1, *temp2, *t3;
    temp1 = head;
    temp2 = temp1->next;
    t3 = temp2->next;
    temp1->next = NULL;
    while (temp2 != NULL)
    {
        t3 = temp2->next;
        temp2->next = temp1;
        temp1 = temp2;
        temp2 = t3;
    }
    head = temp1;
}

void delete_begin()
{
    if (head == NULL)
    {
        printf("List is empty. Nothing to delete");
    }
    else
    {
        printf("%d is deleted", head->data);
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}


void delete_at_position(int pos)
{
    Node *temp = head, *temp1;
    int i = 0;
    while (i < pos && temp!= NULL)
    {
        temp1 = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        printf("Not a valid position");
    }
    else
    {
        temp1->next = temp->next;
        printf("%d deleted", temp1->data);
        free(temp);
    }
}



void main()
{
    display();
    int x = 0;
    printf("Enter 5 values: \n");
    while (x < 5)
    {
        int data;
        scanf("%d", &data);
        create(data);
        x++;
    }
    printf("The linked list is: \n");
    printf("\n");
    display();
    printf("The reversing the linked list: \n");
    reverse_list();
    printf("The linked list after reversal is: \n");
    display();
    printf("\n");
    delete_begin();
    printf("\n");
    display();
    delete_at_position(3);
    printf("\n");
    display();
}