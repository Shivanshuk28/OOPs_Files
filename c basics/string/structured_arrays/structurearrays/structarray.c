#include<stdio.h>

struct students{
    int rollno;
    char name[20];
    char f_name[20];
    float marks;

};

int main()
{
    struct students a[2];
    int i;
    for (i=0;i<2;i++){
        printf("Enter the Roll number of %d student :\n",i+1);
        scanf("%d",&a[i].rollno);
        printf("Enter the name of the student :\n");
        scanf("%s",&a[i].name);
        printf("Enter your fathers name:\n");
        scanf("%s",&a[i].f_name);
        printf("Enter Your total marks out of 100 :\n");
        scanf("%f",&a[i].marks);
        printf("\n\n\n");
        printf("SUCCESSFULLY ENTERED %d DATA :) :)\n",i+1);
        printf("\n\n\n");

    }
    printf("\n\n\n");

    for(int i=0;i<2;i++){
        printf("DATA %d -------------- \n\n",i+1);
        printf("Roll Number: %d \n\n",a[i].rollno);
        printf("Name of the student: %s \n\n",a[i].name);
        printf("Father name: %s \n\n",a[i].f_name);
        printf("Total marks out of 100: %.2f\n\n",a[i].marks);
        printf("\n\n\n");

    }

    
    return 0;
}