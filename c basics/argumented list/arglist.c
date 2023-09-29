#include<stdio.h>
#include<stdarg.h>
int sum(int n, ...)

{
    int sum=0;
    va_list la;
    va_start(la,n);
    for (int i=0;i<n;i++){
        sum+=va_arg(la,int);
    
    }
    va_end(la);
    return sum;   
    
}

int main(){
    int result=sum(3,10,20,30);
    printf("%d\n",result);
    result=sum(5,90,99,10,20,30);
    printf("%d",result);

}

