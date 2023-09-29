#include<stdio.h>
struct details{
    int rollno;
    char name[20];
    int marks[7];

};

int main(){
    struct details d[3];



    for (int i=0;i<3;i++){
        printf("ENTER The roll No of childeren:\n");
        scanf("%d",&d[i].rollno);
        printf("Enter the name of the student:\n");
        getchar();
        gets(d[i].name);
        
        for(int j=0;j<7;j++){
            printf("Enter the marks of subject %d\n",j+1);
            getchar();
            scanf("%d",&d[i].marks[j]);
        }
    }

        int maxx=0;
        int topper_index=0;
        for(int i=0;i<3;i++){
            int summ=0;
            for (int j=0;j<7;j++){
                summ+=d[i].marks[j];
            }
            if (summ>=maxx){
                maxx=summ;
                int topper_index=i;

                }
        }
        printf(" THe topper marks is %d and his name is %c",maxx,d[topper_index].name);
    }
