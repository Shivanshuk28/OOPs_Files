#include<stdio.h>
struct emp{
    int a;
    int b;

};

int main(){
    struct emp e1,e2;
    struct emp*sp=&e1;
    printf("%d\n",&e1);
    printf("%d\n",sp);

    printf("ENTER a\n");
    scanf("%d",&sp->a);
    printf("%d",&sp->a);
}