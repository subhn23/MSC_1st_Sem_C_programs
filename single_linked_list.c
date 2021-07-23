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
        Node *t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = new;
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
    Node *t, *t1 = head;
    while (i < pos)
    {
        t1 = t;
        t = t->next;
    }
    t1->next = new;
    new->next = t;
}
void insert_at_end(int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    Node *t;
    t = head;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = new;
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
        Node *t = head;
        while (t != NULL)
        {
            printf("%d ", t->data);
            t = t->next;
        }
    }
}

void reverse_list()
{
    Node *t1, *t2, *t3;
    t1 = head;
    t2 = t1->next;
    t3 = t2->next;
    t1->next = NULL;
    while (t2 != NULL)
    {
        t3 = t2->next;
        t2->next = t1;
        t1 = t2;
        t2 = t3;
    }
    head = t1;
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
        Node *t = head;
        head = head->next;
        free(t);
    }
}

void delete_at_position(int pos)
{
    Node *t = head, *t1;
    int i = 0;
    while (i < pos && t!= NULL)
    {
        t1 = t;
        t = t->next;
        i++;
    }

    if (t == NULL)
    {
        printf("Not a valid position");
    }
    else
    {
        t1->next = t->next;
        printf("%d deleted", t1->data);
        free(t);
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