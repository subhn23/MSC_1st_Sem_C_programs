#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} Node;

Node *root = NULL;
Node *search(Node *root, int sdata)
{
    if (root == NULL)
    {
        printf("\nData not found\n");
        exit(0);
    }
    else if (root->data == sdata)
    {
        printf("\nData found\n");
        exit(0);
    }
    else
    {
        if (sdata < root->data)
        {
            search(root->left, sdata);
        }
        else
        {
            search(root->right, sdata);
        }
    }
}

void insert(int idata)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = idata;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL)
    {
        //? tree is empty, assign the new node as the root of the tree.
        root = newnode;
    }
    else
    {
        Node *current = root;
        Node *parent = NULL;
        while (1)
        {
            parent = current;
            if (idata < current->data)
            {
                current = current->left;
                if(current = NULL){
                    parent->left = newnode;
                    return;
                }
            }
            else{
                current=current->right;
                if(current == NULL){
                    parent->right = newnode;
                    return;
                }
            }
        }
    }
}