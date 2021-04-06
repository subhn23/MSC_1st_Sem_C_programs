#include <stdio.h>
#include <stdlib.h>

char *input();
char *my_strcpy(char *, char *);
char *my_strcat(char *, char *);
int my_strcmp(char *, char *);
char *my_strncpy(char *, char *, int);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
int my_strlen(char *);

int main()
{
    char *str1, *str2;
    str2 = (char *)malloc(sizeof(char));
    int n, ret, choice;

    printf(">>>>>MAIN MENU <<<<<\n");
    printf("1.strcpy\n");
    printf("2.strcat\n");
    printf("3.strcmp\n");
    printf("4.strncpy\n");
    printf("5.strncat\n");
    printf("6.strncmp\n");
    printf("7.strlen \n");
    printf("8.exit\n");

    while (1)
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            str1 = input();
            str2 = my_strcpy(str2, str1);
            printf("copied String:%s\n", str2);
            break;
        case 2:
            str1 = input();
            str2 = input();
            str1 = my_strcat(str2, str1);
            printf("Concatenated String:%s\n", str1);
            break;
        case 3:
            str1 = input();
            str2 = input();
            ret = my_strcmp(str2, str1);
            if (ret == 0)
            {
                printf("String Equal\n");
            }
            if (ret == 1)
            {
                printf("String1 Greater\n");
            }
            if (ret == -1)
            {
                printf("String2 Greater\n");
            }
            break;
        case 4:
            str1 = input();
            printf("How Many Character U Want To Copy\n");
            scanf("%d", &n);
            str2 = my_strncpy(str2, str1, n);
            printf("String:%s\n", str2);
            break;
        case 5:
            str1 = input();
            str2 = input();
            printf("How Many Character U Want To concatenate\n");
            scanf("%d", &n);
            str1 = my_strncat(str1, str2, n);
            printf("String:%s\n", str1);
            break;
        case 6:
            str1 = input();
            str2 = input();
            printf("How Many Character U Want To Cmpare\n");
            scanf("%d", &n);
            ret = my_strncmp(str2, str1, n);
            if (ret == 0)
            {
                printf("String Equal\n");
            }
            if (ret == 1)
            {
                printf("String1 Greater\n");
            }
            if (ret == -1)
            {
                printf("String2 Greater\n");
            }
            break;
        case 7:
            str1 = input();
            printf("Length of String:%d\n", my_strlen(str1));
        case 8:
            exit(0);
            break;
        default:
            printf("Wrong Choice\n");
        }
    }
}
/*Get the input from the user*/
char *input()
{
    char *s;
    s = (char *)malloc(sizeof(char) * 20);
    printf("Enter String:\n");
    scanf("%s", s);
    return s;
}
/*Logic to implement strlen functionality*/
int my_strlen(char *str1)
{
    int len = 0, i;
    for (i = 0; str1[i] != 0; i++)
    {
        len++;
    }
    return (len);
}
/*Logic to implement strcpy functionality*/
char *my_strcpy(char *str2, char *str1)
{
    int i = 0;
    while (str1[i] != 0)
    {
        *(str2 + i) = *(str1 + i);
        i++;
    }
    return str2;
}
/*Logic to implement strcat functionality*/
char *my_strcat(char *str1, char *str2)
{
    char *str = str2 + my_strlen(str2);
    while (*str1 != '\0')
    {
        *str++ = *str1++;
    }
    *str = '\0';
    return str2;
}
/*Logic to implement strcmp functionality*/
int my_strcmp(char *str2, char *str1)
{
    int i = 0;
    while (*(str1 + i))
    {
        if (*(str1 + i) > *(str2 + i))
        {
            return 1;
        }
        else if (*(str1 + i) < *(str2 + i))
        {
            return -1;
        }
        else
        {
            return 0;
        }
        i++;
    }
}
/*Logic to implement strncpy functionality*/
char *my_strncpy(char *str2, char *str1, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(str2 + i) = *(str1 + i);
    }
    return str2;
}
/*Logic to implement strcat functionality*/
char *my_strncat(char *str1, char *str2, int n)
{
    int i = 0, j;
    while (*(str1 + i))
    {
        i++;
    }
    for (j = 0; j < n; j++)
    {
        *(str1 + i) = *(str2 + j);
        i++;
    }
    return str1;
}
/*Logic to implement strncmp functionality*/
int my_strncmp(char *str2, char *str1, int n)
{
    int i = 0, k = 0;
    while (i < n)
    {
        if (*(str1 + i) > *(str2 + i))
        {
            return 1;
        }
        else if (*(str1 + i) < *(str2 + i))
        {
            return -1;
        }
        else
        {
            k++;
        }
        i++;
    }
    if (k == n)
    {
        return 0;
    }
}