#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 10
struct stackstruct
{
    int top;
    int stack[MAXSIZE];
};

void init(struct stackstruct *stk)
{
    stk->top = -1;
}
void push(struct stackstruct *stk, char element)
{
    if (stk->top == MAXSIZE - 1)
    {
        printf("STACK IS FULL\n");
    }
    else
    {
        stk->top++;
        stk->stack[stk->top] = element;
    }
}

char pop(struct stackstruct *stk)
{
    if (stk->top == -1)
    {
        printf("STCAK ID EMPTY\n");
    }
    char element = stk->stack[stk->top];

    stk->top--;
    return element;
}

int checkbal(struct stackstruct *stk, int length, char *string)
{
    char element;
    for (int i = 0; i < length; i++)
    {
        element = string[i];
        if (element == '(' || element == '{' || element == '[')
        {
            push(stk, element);
        }

        else if (element == ')' || element == '}' || element == ']')
        {
            char topelement = pop(stk);
            if ((topelement=='(' && element ==')') || (topelement=='{' && element=='}') || (topelement=='[' && element ==']')){
                continue;

            }
            else{
                return 0;
            }
        }
    }
    return stk->top==-1?1:0;
}
int main()
{
    char string[MAXSIZE * 2];
    struct stackstruct stk;
    init(&stk);
    printf("ENTER THE STRING:\n");
    scanf("%s", string);
    int length = strlen(string);
    int result=checkbal(&stk,length,string);
    if (result==1){
        printf("BALANCED");
    }
    else{
        printf("NOT BALANCEd");
    }
    return 0;

}