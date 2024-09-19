#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data;
    struct Node *next;
};

int isfull(struct Node *top)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}
int isempty(struct Node *top)
{
    if (top->next == NULL)
    {
        return 1;
    }
    return 0;
}
struct Node *push(struct Node *top, int data)
{
    if (isfull(top))
    {
        printf("Stack Overflow");
        return top;
    }
    else
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(struct Node **top, char data)
{
    if (isempty(*top))
    {
        printf("Stack Underflow");
        return 0;
    }
    else
    {
        if ((data == ')' && (*top)->data == '(') || (data == '}' && (*top)->data == '{') || (data == ']' && (*top)->data == '['))
        {
            struct Node *ptr = *top;
            *top = ptr->next;
            ptr->next = NULL;
            free(ptr);
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    struct Node *top = (struct Node *)malloc(sizeof(struct Node));
    top->data = ' ';
    top->next = NULL;
    char equation[50];
    printf("give the string :\n");
    gets(equation);
    int i = 0, j = -1;
    while (equation[i] != '\0')
    {
        if (equation[i] == '(' || equation[i] == '{' || equation[i] == '[')
        {
            top = push(top, equation[i]);
        }
        
        if (equation[i] == ']' || equation[i] == '}' || equation[i] == ')')
        {
            if (pop(&top, equation[i]))
            {
                j = 1;
            }
            else
            {
                j = 0;
            }
        }
        
        if (j == 0)
        {
            break;
        }
        i++;
    }
    if (j == 0)
    {
        printf("No");
    }
    else
    {
        printf("%d", isempty(top));
    }
    return 0;
}