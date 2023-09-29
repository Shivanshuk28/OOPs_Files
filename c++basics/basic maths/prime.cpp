#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    bool flag=true;
    for(int i=2;i<sqrt(n);i++){
        if (n%i==0){
            flag=false;
        }

    }
    if (flag){
        cout<<"IT IS PRIME";
    }
    else{
        cout<<"Not a prime";
    }
}
int main(){
    int num;
    cout<<"ENTER THE NUMBER:\n";
    cin>>num;
    prime(num);
}