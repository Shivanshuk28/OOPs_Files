#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char arr[10];
int top=-1;
int i=0;
int length=sizeof(arr)/sizeof(arr[0]);
void push(char x)
{ if(top==length-1)
{printf("stack is full\n"); exit(1);}
top++;
arr[top]=x;
}


void pop(char *output)
{ if(top==-1)
{
printf("Stack is empty\n");
} 

*(output+i)=arr[top];
top--;
i++;
} 
void display(char arr[])
{ for(int i=0;i<=top;i++)
{
printf("%c",arr[i]);
}
}

int main()
{
char output[10];
char letter;
int choice;
printf("initializing Stack....\n");
printf("Enter the String..\n");
do{
printf("\n1.Enter character..\n");
printf("2.pop an character..\n");
printf("3.display stack content\n");
scanf("%d",&choice);
if(choice==1)
{
printf("character==\n");
getchar();
scanf("%c",&letter);
push(letter);
}
if(choice==2)
{
pop(output);
printf("\nReversed\n");
printf("%s",output);
}
if(choice==3)
{
display(arr);
}
}while(1);
}