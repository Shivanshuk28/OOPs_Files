#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void gcd(int num1, int num2){
    int maxx=0;
    for(int i=1;i<=min(num1,num2);i++){
        if (num1%i==0 && num2%i==0){
            if (i>=maxx){
                maxx=i;}
        }
    }cout<<maxx;
}

void gcd2(int num1,int num2){
    while (num1>0 &&num2>0){
        if (num1>num2){
            num1=num1%num2;

        }
        else{
            num2=num2%num1;
        }

    }
    if (num1==0){
        cout<<num2;
    }
    else{
        cout<<num1;
    }
}
int main(){
    int n1;
    int n2;
    cout<<"ENTER THE NUMBER 1\n";
    cin>>n1;
    cout<<"ENTER THE NUMBER 2\n";
    cin>>n2;

    gcd2(n1,n2);
    return 0;

}