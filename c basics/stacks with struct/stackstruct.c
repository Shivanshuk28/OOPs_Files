#include<stdio.h>
#include<stdlib.h>
struct stackstruct{
    int top;
    int *stack;
    int initsize;
};


void init(struct stackstruct *stk,int size){
        stk->top=-1;
        printf("INITALIZING THE MEMORY..\n"); 
        stk->stack=(int*)malloc(size*sizeof(int));
        stk->initsize=size;
}


void push(struct stackstruct *stk,int element){

    if (stk->top==stk->initsize-1){
        printf("SIZE IS FULL........Reallocating memory\n");

        int newsize=stk->initsize*2;
        stk->stack=(int *)realloc(stk->stack,newsize);
        stk->initsize=newsize;

    }

    stk->top++;
    stk->stack[stk->top]=element;
}


void pop(struct stackstruct *stk){
    if(stk->top==-1){
        printf("STACK IS EMPTY");

    }
    stk->top--;
}


void display(struct stackstruct *stk){
    if (stk->top==-1){
        printf("StACK IS EMPTY\n");

    }
    else{
        for (int i=0;i<=stk->top;i++){
            printf("%d     ",stk->stack[i]);
        }
    }
}

int main(){
    short int size;
    int element;
    struct stackstruct stk;
    int choice;

    printf("ENTER THE SIZE oF ARRAY:\n");
    scanf("%d",&size);
    init(&stk,size);
    do{
        printf("\n1.push\n");
        printf("2.display\n");
        printf("3. pop\n");
        scanf("%d",&choice);
        if (choice==1){
            printf("ENTER THE ELEMENT");
            scanf("%d",&element);
            push(&stk,element);

        }
        if (choice==2){
            display(&stk);
        }
        if (choice==3){
            pop(&stk);

        }
    

    }while(1);

}

