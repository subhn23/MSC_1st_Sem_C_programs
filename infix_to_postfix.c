#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int top = -1;
char stack[MAX], data;
void push(char data);
char pop();
void disply();
int isFull();
int isEmpty();
void convert(char infix[]);
int precedence(char ch);
int isOperater(char ch);
int isOperand(char ch);
int main()
{
    int no;
    char dat, infix[100];
    printf("Enter a Infix String:");
    fgets(infix, 100, stdin);
    printf("The Given Infix Satement is:");
    puts(infix);
    convert(infix);
    return 0;
}

void push(char data)
{
    if (isFull())
    {
        printf("Stack is Already Full...");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
char pop()
{
    char item;
    if (isEmpty())
    {
        return -1;
        exit(1);
    }
    else
    {
        item = stack[top];
        top--;
        return item;
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
            printf("%c\n", stack[i]);
        }
    }
}
int isFull()
{
    if (top == MAX - 1)
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
int precedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '/' || ch == '%' || ch == '*')
    {
        return 2;
    }
    else if (ch == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}
int isOperater(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isOperand(char ch)
{
    if (isalpha(ch) || isdigit(ch))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void convert(char infix[])
{
    int i = 0, j = 0;
    char ch, ch1, postfix[100];
    push('(');
    strcat(infix, ")");
    int len = strlen(infix);

    for (i = 0; i < len; i++)
    {
        ch = infix[i];
        if (ch == '(')
        {
            push(ch);
        }
        else if (isOperand(ch))
        {
            postfix[j] = ch;
            j++;
        }
        else if (isOperater(ch))
        {
            ch1 = pop();
            while (precedence(ch1) >= precedence(ch))
            {
                postfix[j] = ch1;
                j++;
                ch1 = pop();
            }
            push(ch1);
            push(ch);
        }
        else if (ch == ')')
        {
            ch1 = pop();
            while (ch1 != '(')
            {
                postfix[j] = ch1;
                j++;
                ch1 = pop();
            }
        }
    }
    printf("After convert infix to PostFix:");
    puts(postfix);
}
