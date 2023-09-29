#include<stdio.h>
#include<string.h>

int main(){
    char a[20]="shivanshu";
    char b[20];
    //copy
    strcpy(b,a);
    printf("%s\n",b);
    //compare
    int ans_ofcomp=strcmp(a,b);
    printf("%d\n",ans_ofcomp);
    //concatenate
    strcat(a,b);
    printf("%s\n",a);


    return 0;

}