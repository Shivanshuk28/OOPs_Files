#include<stdio.h>
#define maxsize 100
int queue[maxsize];
int f=-1;
int r=-1;
void enque(int element){
    if (r==maxsize-1){
        printf("QUEUE FULL\n");

    }
    else if (f==-1){
        f=0;
    }
    r++;
    queue[r]=element;
}

int deque(){
    if (f==-1 || f>r){
        printf("STACK IS emPTY\n");
        return -1;
    }
    int element=queue[f];
    f++;
    if(f>r){
        f=r=-1;
    }
return element;
}

void display(){
    if (f==-1 || f>r){
        printf("STACK IS EMPTY\n");
        return;
    }
    printf("QUEUE:  ");
    for(int i=f;i<=r;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main(){
    int element;
    int choice;
    
    do{
        
        printf("1)enque\n 2)deque\n 3)display\n");
        printf("ENTER THE cHOICE\n");
    scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("ENTER THE ELEMENMT\n");
            scanf("%d",&element);
            enque(element);
            break;

            case 2:
            deque();
            break;

            case 3:
            display();
            break;


        }
    }while(1);

    return 0;
}

