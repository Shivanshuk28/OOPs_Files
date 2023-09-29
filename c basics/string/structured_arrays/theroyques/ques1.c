#include<stdio.h>
#include<math.h>
float caldistance(struct address x, struct address y);
struct coor{
    int lat;
    int lon;
    };
struct emp{
    int empid;
    struct coor empadd;
    };

struct cust{
    int custid;
    struct coor custadd;
};

float caldistance(struct address x, struct address y){
    float result=sqrt(pow(x.lon-y.lon,2)+pow(x.lat-y.lat,2));
    return result;
}


int main(){
    struct emp e1[3];
    
    for (int i=0;i<3;i++){
        printf("ENTER THE Details of employee %d\n"i+1);

        scanf("%d",e1[i].empid);
        printf("ENETR THE COORDINATES\n");
        printf("ENTER THE LATITUDE\n");
        scanf("%d",e1[i].empadd.lat);
        printf("ENTER THE Longitude\n");
        scanf("%d",e1[i].empadd.lon);
        
    }
    struct cust c;
    c.custid=111;
    c.custadd.lat=1;
    c.custadd.lon=1;

    for (int i=0;i<3;i++){
        float distance = caldistance(e1[i].empadd,c.custadd);
        float min=0;
        
    }
}
