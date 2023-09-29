#include<stdio.h>
#include<stdlib.h>
struct stackstruct{
    int top;
    int initsize;
    int *stack;
};

void init(struct stackstruct *stk,int size){
    stk->top=-1;
    printf("INITTIALIZING MEMORY...\n");
    stk->stack=(int*)malloc(size*sizeof(int));
    stk->initsize=size;
}
void push(struct stackstruct *stk,int element){
    if (stk->top==stk->initsize-1){
        printf("SIZE IS FULL .... INTIALIZING MORE MEMORY");
        int newsize=stk->initsize*2;
        stk->stack=(int*) realloc(stk->stack,newsize);
        stk->initsize=newsize;
    }
    stk->top++;
    stk->stack[stk->top]=element;
} 

void pop(struct stackstruct *stk){
    if(stk->top<=-1){
        printf("STACK IS EMPTY\n");

    }
    stk->top--;
    // printf("POPPED SUCCESFULLY");

}
void display(struct stackstruct *stk){
    if (stk->top==-1){
        printf("STACK IS EMPTY");

    }
    else{
        for (int i=stk->top;i>=0;i--){
            printf("%d    ", stk->stack[i]);
        }
    }
}

int main(){
    struct stackstruct stk;
    int element;
    int choice;
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    init(&stk,size);
    do{
        printf("\n1) Push\n");
        printf("2) display\n");
        printf("3) Pop\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("ENTER THE ELEMENT\n");
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