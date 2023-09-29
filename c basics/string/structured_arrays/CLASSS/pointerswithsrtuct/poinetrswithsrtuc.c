#include<stdio.h>
struct emp{
    int a;
    int b;
    

};
int mul(struct emp x){
    printf("%d",x.a*x.b);



}

int main(){
    struct emp e1,e2;
    // struct emp*sp=&e1;
    // printf("%d\n",&e1 );
    // printf("%d\n",sp);
    e1.a=10;
    e1.b=10;
    mul(e1);

    }