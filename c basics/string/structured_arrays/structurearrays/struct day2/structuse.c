#include<stdio.h>
struct dim{
    int l;
    int b;
}a1,a2={10,10};

struct area{
    int totalarea1;
    int totalarea2;
};

struct area calarea(struct dim x, struct dim y){
    struct area ta;
    
    ta.totalarea1=x.l*x.b;
    ta.totalarea2=y.l*y.b;
    return ta;

}


int main(){
    a1.l=20;
    a1.b=20;
    struct area rar=calarea(a1,a2);
    printf("%d\n %d",rar.totalarea1,rar.totalarea2);

}