#include<stdio.h>
#define size 20
struct lop{
    int front;
    int rear;
    int array[size];
};

int isempty(struct lop *stk){
    return stk->front=stk->rear==-1;
}

int isfull(struct lop *stk){
    return stk->rear+1 %size ==stk->front;
}
int init(struct lop *stk){
    stk->front=-1;
    stk->rear=-1;
}

int enque(struct lop *stk,int element){
    if (isfull(stk)){
        printf("QUEUE IS FULL\n");

    }
    if (isempty(stk)){
        stk->front=0;
        stk->front=0;
    }
    else{
        stk->rear=(stk->rear+1)%size;
        
    }
    stk->array[stk->rear]=element;

}
int deque(struct lop *stk){
    if(isempty(stk)){
        printf("THE QUEUE IS EMPTY\n");

    }
    int element =stk->array[stk->front];
    if (stk->front == stk->rear){
        stk->front=-1;
        stk->rear=-1;

    }
    else {
        stk->front=(stk->front+1)%size;

    }
    return element;

}
int display(struct lop *stk){
    for(int i=stk->front;i<=stk->rear;i=(i+1)%size){
        printf("%d ",stk->array[i]);
    }
}

int main(){
    struct lop stk;
    int choice;
    int element;
    do{
        printf("\n1)enque\n2)deque\n3)display\n");
        printf("ENTER YOUR CHOICE\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            printf("ENTER THE ELEMENT\n");
            scanf("%d",&element);
            enque(&stk,element);
            break;

            case 2:
            deque(&stk);
            break;

            case 3:
            display(&stk);
        }
    }while(1);
}