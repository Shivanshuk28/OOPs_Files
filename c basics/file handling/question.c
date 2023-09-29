#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp=fopen("quess.txt","w+");
    if (fp==NULL){
        printf("Failed to open the file\n");
        return 1;
    }
    char name[50];
    char line[20];
    printf("ENTER THE STRING:\n");
    scanf("%s",&name);
    fprintf(fp,"%s",name);
    rewind(fp);
    fgets(line,4,fp);
    printf("%s",line);
    for(int i=length  )





    fclose(fp);
    return 0;




}