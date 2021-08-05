#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
#define size 100

int top = -1, top1 = -1, arr[size];
char stack[MAX], data, postfix[100];

void push(char data);
char pop();

void disply();
int isFull();
int isEmpty();

void convert(char infix[]);
int precedence(char ch);
int isOperater(char ch);
int isOperand(char ch);

void push1(int no);
int pop1();
void disply1();
int isFull1();
int isEmpty1();

void evalute(char infix[]);

int main()
{
    int no;
    char dat, infix[100];

    printf("Enter a Infix String:");
    fgets(infix, 100, stdin);
    printf("The Given Infix Satement is:");
    puts(infix);
    convert(infix);

    evalute(postfix);
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
    char ch, ch1;
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


void push1(int no)
{
    if (isFull1())
    {
        printf("Stack is Already Full...");
    }
    else
    {
        top1++;
        arr[top1] = no;
    }
}

int pop1()
{
    int pno;
    if (isEmpty1())
    {
        return -1;
        exit(1);
    }
    else
    {
        pno = arr[top1];
        top1--;
        return pno;
    }
}

void disply1()
{
    int i;
    if (isFull1())
    {
        printf("Stack is Full");
    }
    else
    {
        printf("The Given Number are:\n");
        for (i = 0; i <= top1; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}
int isFull1()
{
    if (top1 == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty1()
{
    if (top1 == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void evalute(char infix[])
{
    int i, ch1, no, num1, num2, result;
    for (i = 0; i < strlen(infix); i++)
    {
        ch1 = infix[i];
        if (isdigit(ch1))
        {
            no = ch1 - '0';
            // printf("%d",no);
            push1(no);
            //      	disply1();
        }
        else if (ch1 == '+' || ch1 == '-' || ch1 == '*' || ch1 == '/')
        {
            num1 = pop1();
            num2 = pop1();
            //      	printf("%c",ch1);
            switch (ch1)
            {
            case '+':
                result = num2 + num1;
                push1(result);
                break;
            case '-':
                result = num2 - num1;
                push1(result);
                break;
            case '*':
                result = num2 * num1;
                push1(result);
                break;
            case '/':
                result = num2 / num1;
                push1(result);
                break;
            }
        }
        else
        {
            printf("Enter only Integer Equation....");
        }
    }
    printf("%d\temp", result);
}
