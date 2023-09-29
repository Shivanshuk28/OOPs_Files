#include<stdio.h>
int top=-1;
int isfull(int size){
    if (top==size-1){
        printf("STACK IS FULL");
        return 1;
    }
    return 0;
}
int isempty(int size){
    if (top==-1){
        printf("STICK IS EMPTY");
        return 1;

    }
    return 0;
}
int push(int arr[],int element,int size){
    if (isfull(size)){
        printf("STACK IS FULL\n");
        return 0;

    }
    
    else{
        ++top;
        arr[top]=element;
        return 1;
    }
}
void display(int size,int arr[]){
    if (isempty(size)){
        printf("STACK IS EMPTY\n");
    }
    else{
        for (int i=top;i>=0;i--){
            printf("%d  ",arr[i]);
        }
    }
}
void pop(int size){
    if (isempty(size)){
        printf("STACK IS EMPTY\n");
    }
    else{
        top--;
        printf("ELEMENT POPPED");
    }
}


int main(){
    int size;
    printf("ENTER THE SIZE:\n");
    scanf("%d",&size);
    int arr[size];
    int flag =1;
    int choice;
    int element;
    while(flag){
        printf("\n1->push\n2->pop\n3->display\n4->exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("ENTER the element\n");
            scanf("%d",&element);
            if (!push(arr,element,size)){
                flag=0;

            };
            break;

            case 2:
            pop(size);
            break;

            case 3:
            display(size,arr);
            break;

            case 4:
            flag=0;
            break;
        }

    }return 0;
}