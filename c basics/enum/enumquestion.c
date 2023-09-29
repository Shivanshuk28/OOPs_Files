#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#define CLEARSCREEN system ( "cls" )
#include <process.h>
enum traffic{
    red,
    green,
    yellow
};
int main(){
    enum traffic z=red;
    while(1){
        if (z==red){
            printf("RED\n");
            z=green;
            sleep(2);
            system("cls");
        }
        if (z==green){
            printf("GREEN\n");
            z=yellow;
            sleep(2);
            system("cls");
        }
        if (z==yellow){
            printf("YELLOW\n");
            z=red;
            sleep(2);
            system("cls");
        }
    }
}
