#include<stdio.h>
enum color{
    red=5,
    green=8,
    blue};
    int main(){
enum color z=red;

        // printf("%d\n",blue);
        printf("%d",z);
        // if (z==red){

        // }
        switch(z){
            case red:
            printf("RED");
            break;

            case green:
            printf("GREEN");
            break;

            default:
            printf("END");
        }

    }
