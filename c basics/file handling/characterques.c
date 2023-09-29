#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp=fopen("character.txt","r");
    if (fp==NULL){
        printf("Failed to open the file\n");
        return 1;
    }
    char line[100];
    int countint=0;
    int countchar=0;
    int spchar=0;
    char ch;
    while ((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
        if (isalpha(ch)){
            countchar+=1;
        }

        else if (isdigit(ch)){
            countint+=1;

        }
        else{
            spchar+=1;
        }
    }
    printf("THE NUMBER OF CHARACTER ARE %d\n",countchar);
    printf("THE NUMBER OF integers ARE %d\n",countint);
    printf("THE NUMBER OF special CHARACTEr ARE %d\n",spchar);
}