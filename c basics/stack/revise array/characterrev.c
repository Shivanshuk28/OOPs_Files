#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char arr[10];
// int i=0;
int top=-1;
int i=0;
int length=sizeof(arr)/sizeof(arr[0]);

int isfull(){
    if (top==length-1){
        return 1;
    }
    return 0;

}
int isempty(){
    if (top==-1){
        return 1;

    }return 0;

}

void push(char element){
    if (isfull()){
        printf("STACK IS FULL\n");

    }
    else{
        ++top;
        arr[top]=element;

    }
}
void pop(char *output){
    if(top==-1)
{
printf("Stack is empty\n");
} 
    *(output+i)=arr[top];
    top--;
    i++;
}
void display(){
    if (isempty()){
        printf("The stack is empty\n");
    }
    else{
        for (int i=0;i<=top;i++){
            printf("%c ",arr[i]);
        }
    }
}



int main(){
    int choice;
    char output[10];
    char element;
    do{
        printf("\n1>Push...\n2> POP...\n 3>Display...\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("ENTER THE element\n");
            getchar();
            scanf("%c",&element);
            push(element);
            break;

            case 2:
            pop(output);
            printf("REVERSED STRING:");
            for (int j = 0; j <=i; j++) {
                    printf("%c ", output[j]);
                }
            break;

            case 3:
            display(arr);
            break;

        }
    }while(1);
}