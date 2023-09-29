#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
// Helper function to check if a character is an operator
int is_operator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
// Helper function to determine the precedence of an operator
int precedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    return 0;
}
// Function to reverse a string
void reverse_string(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
// Function to convert infix expression to prefix expression
void infix_to_prefix(char *infix, char *prefix)
{
    char stack[MAX_SIZE];
    int top = -1;
    int i, j = 0;
    reverse_string(infix);
    for (i = 0; infix[i]; i++)
    {
        if (infix[i] == '(')
        {
            infix[i] = ')';
            i++;
        }
        else if (infix[i] == ')')
        {
            infix[i] = '(';
            i++;
        }
    }
    for (i = 0; infix[i]; i++)
    {
        if (infix[i] >= 'a' && infix[i] <= 'z')
        {
            prefix[j++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            stack[++top] = infix[i];
        }
        else if (infix[i] == ')')
        {
            while (top >= 0 && stack[top] != '(')
            {
                prefix[j++] = stack[top--];
            }
            if (top >= 0 && stack[top] == '(')
            {
                top--;
            }
        }
        else
        {
            while (top >= 0 && precedence(stack[top]) >=precedence(infix[i]))
            {
                prefix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }
    while (top >= 0)
    {
        prefix[j++] = stack[top--];
    }
    prefix[j] = '\0';
    reverse_string(prefix);
}
int main()
{
    char infix[MAX_SIZE];
    char prefix[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infix_to_prefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
