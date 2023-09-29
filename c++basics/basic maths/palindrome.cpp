#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int palin(int number){
    int numc=number;
    int rev=0;
    while(numc>0){
        int digit=numc%10;
        rev=rev*10+digit;
        numc=numc/10;
    }
    if (number==rev){
        return 1;
    }

    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER:\n";
    cin>>n;
    if (palin(n)){
        cout<<"IT IS PLAINDROME";
    }
    else{
        cout<<"not a palindrome";
    }
}


