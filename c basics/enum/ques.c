#include<stdio.h>
#include<string.h>
enum brand{
    Tata,
    Mahindra,
    VW
};
struct cardetails{
    enum brand v;
    char carname[10];
    int price;
    int year;
    

};


void add_details(enum brand b,char *name, int price,int year){
    struct cardetails car1;
    char *cararr[]={"Tata","Mahindra","VW"};
    printf("%s",cararr[b]);
    strcpy(car1.carname,name);
    car1.price=price;
    car1.year=year;
    printf(" %s %d %d\n",car1.carname,car1.price,car1.year);
}
int main(){
    struct cardetails c;
    add_details(Tata,"nexon",1000,2015);
    add_details(VW,"x5",11000,2019);


}