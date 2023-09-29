#include<stdio.h>
struct emp_detail{
    int emp_id;
    struct name{
        char first_name[15];
        char last_name[15];
    }ename;
    char dept[20];
    int level;
    struct contact{
        long mb_no;
        long work_no;
        char email [70];
    }cont;

};
 

int main()
{
    struct emp_detail empo[2];
    int i;

    printf("THIS IS THE PROTAL TO ENTER THE DETAILS OF THE EMPLOYEES\n");
    printf("-------------------------------------------------------------------\n\n");
    for (i=0;i<2;i++){
        printf("ENTER THE EMP_ID :\n");
        scanf("%d",&empo[i].emp_id);
        printf("ENTER THE FIRST NAME: \n");
        scanf("%s",&empo[i].ename.first_name);
        printf("ENTER THE LAST NAME: \n");
        scanf("%s",&empo[i].ename.last_name);
        printf("ENTER YOUR DEPARTEMENT :\n");
        scanf("%s",&empo[i].dept);
        printf("ENTER YOUR LEVEL :\n");
        scanf("%d",&empo[i].level);
        printf("ENTER YOUR CONTACT DETAILS NOW\n\n");
        printf("ENTER YOUR MOBILE NUMBER: \n");
        scanf("%ld",&empo[i].cont.mb_no);
        printf("ENTER YOUR WORK NUMBER: \n");
        scanf("%ld",&empo[i].cont.work_no);
        printf("ENTER YOUR EMAIL ID: \n");
        scanf("%s",&empo[i].cont.email);
        printf("\n\n\n");
        printf("SUCCESFULLY ENTERED DATA %d :) :) \n\n" ,i+1);

    }
    printf("\n\n");
    for (i=0;i<2;i++){
        printf("Emp ID: %d\n",empo[i].emp_id);
        printf("First Name: %s\n",empo[i].ename.first_name);
        printf("Last Name: %s\n",empo[i].ename.last_name);
        printf("DEPARTEMENT : %s\n",empo[i].dept);
        printf("LEVEL : %d\n",empo[i].level);
        printf("MOBILE NUMBER: %ld\n",empo[i].cont.mb_no);
        printf("WORK NUMBER : %ld\n",empo[i].cont.work_no);
        printf("EMAIL ID : %s \n",empo[i].cont.email);
    printf("\n\n\n");


    }
        return 0;

}
