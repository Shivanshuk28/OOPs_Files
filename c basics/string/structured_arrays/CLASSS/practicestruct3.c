#include<stdio.h>
struct student{
    int rollno;
    char name[10];
};
int main(){
    struct student std[3];
    for (int i=0;i<3;i++){
        printf("Enter the Rollno of student %d\n",i+1);
        scanf("%d",&std[i].rollno);
        printf("ENTEr the name of student %d \n",i+1);
        getchar();
        fgets(std[i].name,10,stdin);
        
    }

    for (int i=0;i<3;i++){
        printf("Rollno of student is %d --------------- name is %s\n",std[i].rollno,std[i].name);

}
}