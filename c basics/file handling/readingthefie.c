#include<stdio.h>
#include<string.h>

int main(){
    // char name[20];
    FILE *fp=fopen("new2.txt","r");
    if(fp==NULL){
        printf("FAILED TO OPEN THE FILE\n");
        return 1;
    }
    char line[50];
    while(fgets(line,sizeof(line),fp)!=NULL){
        printf("%s",line);
        


    }



fclose(fp);
return 0;
} 
