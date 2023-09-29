#include<stdio.h>
#include<string.h>
// #pragma pack(1)


struct dept{

    char s:4;
    char t:4;
    char u:4;
    char v:4;
    char x:4;
    char y:4; 
    char z:4;
    char h:4;
    char j:4;
    char i:4;
    char k:7;
    char b:1;
    char q;
//     short int a; 
//  char b;
//  char d;
//  char e;  
//  int c;

};
int main(){
    struct dept e;
    
    printf("size of struct is %d",sizeof(struct dept));


}