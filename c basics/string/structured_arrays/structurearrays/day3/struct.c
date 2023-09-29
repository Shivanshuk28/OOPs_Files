#include<stdio.h>
#include<string.h>
struct dept{
 char a;
 int b;
 int c;
 double d;

}e;
int main(){
    printf("a=%d ",&e.a);
    printf("b=%d ",&e.b);
    printf("c=%d ",&e.c);
    printf("d=%d\n ",&e.d);
    printf("size of struct is %d",sizeof(struct dept));


}