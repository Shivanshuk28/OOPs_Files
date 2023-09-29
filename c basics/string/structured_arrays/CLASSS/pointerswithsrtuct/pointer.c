#include<stdio.h>
struct emp{
    int a;
    int b;

};

int main(){
    struct emp e1,e2;
    printf("%d\n",&e1);
    printf("%d\n",&e1.a);
    printf("%d\n",&e1.b);

    printf("---------------\n");
    printf("%d\n",&e2);
    printf("%d\n",&e2.a);
    printf("%d\n",&e2.b);

}