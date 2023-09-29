#include<stdio.h>
#include<string.h>

int main(){
    // char name[20];
    FILE *fp=fopen("new2.txt","w");
    if(fp==NULL){
        printf("FAILED TO OPEN THE FILE\n");
        return 1;
    }
    int ch=1;
    int rollno;
    int name[20];
    while(ch!=0){
        printf("ENTER THE ROLL NUMEBR:\n");
        scanf("%d",&rollno);
        printf("ENTER THE name \n" );
        scanf("%s",name);
        fprintf(fp,"%d %s \n",rollno,name);
        printf("DO YOU WANT TO CONTINUE 1-> yes 0-> NO");\
        scanf("%d",&ch);

    }



fclose(fp);
return 0;
} 
