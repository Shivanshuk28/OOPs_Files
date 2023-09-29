#include<stdio.h>
int main(){
    FILE *fp=fopen("product.txt","w");
    if(fp==NULL){
        printf("FAILED TO OPEN THE FILE\n");
        return 1;
    }

    fprintf(fp,"HELLO,WORLD!!\n");
    fprintf(fp,"This is sample file\n");

fclose(fp);
return 0;
} 
