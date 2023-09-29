#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXSIZE 20
struct stack{
    int top;
    int stack[20];
};
int isfull(struct stack *stk){
    return stk->top==MAXSIZE-1;
}
int isempty(struct stack *stk){
    return stk->top==-1;

}
void init(struct stack *stk){
    stk->top=-1;
}
int precedence(char operator){
    if (operator =='+'|| operator =='-'){
        return 1;

    }
    else if (operator =='*' || operator=='/'){
        return 2;

    }
    else if (operator=='^'){
        return 3;

    }
    return 0;

}
int push(struct stack *stk,int element){
    if (isfull(stk)){
        printf("STack is full\n");

    }
    else{
        stk->top++;
        stk->stack[stk->top]=element;
        return 0;

    }
}
int pop(struct stack *stk){
    int element;
    if (isempty(stk)){
        printf("STACK IS EMPTY\n");

    }
    else{
        element=stk->stack[stk->top];
        stk->top--;
    }

    return element;
}
int infixtoprefix( char *input,char *expression,int length){
    struct stack stk;
    init(&stk);
    int ei=0;
    for (int i=0;i<=length-1;i++){
        char element=input[i];
        if (isdigit(element)|| isalnum(element)){
            expression[ei]=element;
            ei++;
        }
        else if (element=='('){
            push(&stk,element);

        }
        else if(element==')'){
            while(!isempty(&stk)||(stk.stack[stk.top]=='(')){
                expression[ei]=pop(&stk);
                ei++;
            }
            pop(&stk);
        }
        else{
            while(isempty(&stk) && precedence(element)<=precedence(stk.stack[stk.top])){
                expression[ei]=pop(&stk);
                ei++;
            }
            push(&stk,element);
        }

    }
    while(!isempty(&stk)){
        expression[ei]=pop(&stk);
        ei++;
    }
    expression[ei]='\0';
}

int main(){
    char expression[MAXSIZE];
    char input[MAXSIZE];
    printf("ENTER THE STATEMENT\n");
    scanf("%s",&input);
    int length=strlen(input);
    infixtoprefix(input,expression,length);
    printf("%s ",expression);
}