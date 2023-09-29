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

int compression(){
    



}

int main(){


}