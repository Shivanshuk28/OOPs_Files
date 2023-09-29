#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
short int top=-1;
int push(int value){
    if (top==MAXSIZE-1){
        printf("STACK IS FULL\n");
        return 1;
    }
    ++top;
    stack[top]=value;
    printf("SUCCESS!!!!!!!!!!!!!!!!!!!");
}

int pop(){
    if (top==-1){
        printf("STACK iS EMPTY...\n");
        return 1;
    }
    top--;
    printf("ElEMENT POPPED ..");
}

int display(){
    if (top==-1){
        printf("STACK iS EMPTY...\n");
        return 1;

    }
    for(int i=0;i<=top;i++){
        printf("%d  ",stack[i]);


    }

}

int main()
{
    int choice;
    int element;
    do{
        printf("\n1--> PUSH()\n");
        printf("\n2--> POP()\n");
        printf("\n3--> DISPLAY()\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("ENTER THE ELMENT:\n");
            scanf("%d",&element);
            push(element);
            break;

            case 2:
            pop();
            break;


            case 3:
                display();
                break;


        }
    }while(1);
    return 0;
}