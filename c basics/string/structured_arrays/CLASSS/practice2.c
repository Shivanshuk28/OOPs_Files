#include<stdio.h>
struct employee{
    char name[20];
    struct address{
        int houseno;
        int streetno;
        struct location{
        int log;
        int lat;
        }loc; 
    }ad;
};

int main(){
    struct employee e1,e2,e3;

    e1.ad.houseno=90;
    e1.ad.loc.log=44343;

    printf("%d %d",e1.ad.houseno,e1.ad.loc.log);
}