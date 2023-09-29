// #include<stdio.h>
// right to left ^
// left to right */
// l to r + -

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define maxsize 20
 int top;
char stack[10];
struct stack
{
   
};
void init(struct stack *stk)
{
    stk->top = -1;
}
int isFull(struct stack *stk)
{
    return stk->top == maxsize - 1;
}
int isEmpty(struct stack *
                stk)
{
    return stk->top == -1;
}

int push(struct stack *stk,int element)
{
    if (isFull(stk))
    {
        printf("Stack is Full...");
        return 1;
    }
    else
    {
        stk->top++;
        stk->stack[stk->top] = element;
        return 0;
    }
}

int pop(struct stack *stk)
{
    int element;
    if (isEmpty(stk))
    {
        printf("Stack is empty");
    }

    else
    {
        element = stk->stack[stk->top];
        stk->top--;
    }
    return element;
}



int precedence(char operator)
{
    if (operator== '+' || operator== '-')
    {
        return 1;
    }
    else if (operator== '*' || operator== '/')
    {
        return 2;
    }
    else if (operator== '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

int infixtoposfix(char *input, char *expression, int length)
{
    struct stack stk;
    init(&stk);
    int ei = 0;
    for (int i = 0; i < length; i++)
    {
        char element = input[i];
        if (isdigit(element) || isalnum(element))
        {
            expression[ei] = element;
            ei++;
        }
        else if (element == '(')
        {
            push(&stk, element);
        }
        else if (element == ')')
        {
            while (!isEmpty(&stk) && stk.stack[stk.top] != '(')
            {
                expression[ei] = pop(&stk);
                ei++;
            }
            pop(&stk);
        }
        else
        {
            while (isEmpty(&stk) && precedence(element) <= precedence(stk.stack[stk.top]))
            {
                expression[ei] = pop(&stk);
                ei++;
            }
            push(&stk, element);
        }
    }
    while (!isEmpty(&stk))
    {
        expression[ei] = pop(&stk);
        ei++;
    }
    expression[ei] = '\0';
}
int main()
{
    char input[maxsize];
    char expression[maxsize];
    printf("Enter the expression\n");
    scanf("%s", input);
    int length = strlen(input);
    infixtoposfix(input, expression, length);
    printf("%s ", expression);
}