#include<stdio.h>
#include<string.h>

struct storedetails{
    char booktit[20];
    char bookaut[20];
    int price;

};

int main(){
    struct storedetails a[3];
    int i;  
    for (i=0;i<3;i++){
        printf("Enter the Book title:\n",i+1);
        gets(a[i].booktit);
        printf("ENTER THE NAME OF THE AUTHor:\n");
        gets(a[i].bookaut);
        printf("Enter the BOOK PRICE:\n");
        scanf("%d",&a[i].price);

        getchar();
    }
    printf("\n\n\n");

    for (int i=0;i<3;i++){
        printf("THE data is ------------------\n\n");
        printf("BOOK TITLE: %s\n\n",a[i].booktit);
        printf("THE NAME OF THE AUTHOR IS :---------%s\n\n",a[i].bookaut);
        printf("THE BOOK PRICE---------%d",a[i].price);
        printf("\n\n\n");

    }
    return 0;

}