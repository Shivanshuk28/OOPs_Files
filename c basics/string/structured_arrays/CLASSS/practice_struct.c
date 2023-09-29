#include<stdio.h>
struct employee{
    char name[20];
    struct address{
        int houseno;
        int streetno;
    }ad;
    struct location{
        int log;
        int lat;
    }loc;

};

int main(){
    struct employee e1,e2,e3;

    e1.ad.houseno=90;
    e1

}