#include<stdio.h>
struct emp{
    int empid;

    struct dept{
        int depid;
    }d1,d2;
};

int main(){
    struct emp e1,e2,e3;
    e1.empid=123;
    e2.empid=234;
    e3.empid=356;

    // e1.d1.depid=111;
    // e2.d1.depid=111;
    // e3.d2.depid=222;

     


    printf("%d %d %d",e1.empid,e2.empid,e3.empid);


}