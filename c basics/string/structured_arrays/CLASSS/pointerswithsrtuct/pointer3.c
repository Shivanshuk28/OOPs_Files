#include<stdio.h>
struct emp{
    int a;
    int b;
    

};
int mul(int *x, int *y){
    printf("%d",*x * *y);



}

int main(){
    struct emp e1,e2;
    // struct emp*sp=&e1;
    // printf("%d\n",&e1);
    // printf("%d\n",sp);
    e1.a=10;
    e1.b=10;
    mul(&e1.a,&e1.b);

    }