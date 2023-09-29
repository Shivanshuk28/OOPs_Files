#include<stdio.h>
#include<string.h>

int main(){
    char name[20];
    FILE *fp=fopen("new.txt","w");
    printf("ENTER THE CONTENY OF FILE:\n");
    fgets(name,20,stdin);
    fputs(name,fp);



fclose(fp);
return 0;
} 
