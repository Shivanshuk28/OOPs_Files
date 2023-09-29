#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define maxsize 20
// int top;
struct pstack{
    int top;
    int stack[maxsize];
};

int isfull(struct pstack *stk){
    return stk->top==maxsize-1;

}
int isempty(struct pstack *stk){
    return stk->top==-1;
}

int init(struct pstack *stk){
    stk->top=-1;
}
int push(struct pstack *stk,int element){
    if (isfull(stk)){
        printf("stack is full\n");
        return 1;

    }
    else{
        stk->top++;
        stk->stack[stk->top]=element;
        return 0;
        
    }

}
int pop(struct pstack *stk){
    int element;
    if (isempty(stk)){
        printf("STaCK IS EMPTY\n");
        return 1;

    }
    else{
        element=stk->stack[stk->top];
        stk->top--;
    }
    return element;
    
}

int preeva(char *input, int length){
    struct pstack stk;
    init(&stk);
    // int ei=0;
    char element;
    for(int i=length-1;i>=0;i--){
        element=input[i];
        if (isdigit(element)|| isalnum(element)){
            push(&stk,element-'0');
        }
        else{
            int op2=pop(&stk);
            int op1=pop(&stk);
            switch(element){
                case '+':
                push(&stk,op2+op1);
                break;

                case '-':
                push(&stk,op2-op1);
                break;

                case '*':
                push(&stk,op2*op1);
                break;

                case '/':
                push(&stk,op2/op1);
                break;

                default:
                printf("INVALID CHARACTER IN EXPRESSION: %c\n",input[i]);
                return 1;
            }
        }
        

    }return pop(&stk);

}

int main(){
    char input[maxsize];
    printf("ENTER THE STATEMENT:\n");
    scanf("%s",input);
    int length=strlen(input);
    int result=preeva(input,length);
    printf("%d",result);

        
}