#include <stdio.h>
#include <string.h>
#define maxsize 10
struct stacktemp
{
    int top;
    int stack[maxsize];
};

void init(struct stacktemp *stack)
{
    stack->top = -1;
}

int push(struct stacktemp *stack, char element)
{
    if (stack->top == maxsize - 1)
    {
        printf("Stack is full....");
    }
    stack->top++;
    stack->stack[stack->top] = element;
    return 0;
}

char pop(struct stacktemp *stack)
{
    char element = stack->stack[stack->top];
    stack->top--;
    return element;
}

int checkbal(struct stacktemp *stack, char *string, int length)
{
    char element;
    for (int i = 0; i < length; i++)
    {
        element = string[i];
        if (element == '(' || element == '{' || element == '[')
        {
            push(stack, element);
        }
        else if (element == ')' || element == '}' || element == ']')
        {
            char topElement = pop(stack);
            printf("\n...%c", topElement);

            if ((topElement == '(' && element == ')') ||
                (topElement == '{' && element == '}') ||
                (topElement == '[' && element == ']'))
            {
                continue;
            }  
            else
            {
                return 0;
            }
        }
    }
    return stack->top == -1 ? 1 : 0;
}

int main()
{
    struct stacktemp stack;
    char string[maxsize * 2];
    init(&stack);
    printf("Enter the expression");
    scanf("%s", string);    
    int length = strlen(string);
    int result = checkbal(&stack, string, length);
    if (result == 1)
    {
        printf("Balanced bracked...");
    }
    else
    {
        printf("no balanced");
    }
}