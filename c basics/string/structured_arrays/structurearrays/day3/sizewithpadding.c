#include<stdio.h>
#include<string.h>
#pragma pack(1)


struct dept{

    char s;
    char t;
    char u;
    char v;
    char x;
    char y; 
    char z;
    short int a; 
 char b;
 char d;
 char e;
 int c;
 

}__attribute__((packed));
int main(){
    struct dept e;
    
    printf("size of struct is %d",sizeof(struct dept));


}