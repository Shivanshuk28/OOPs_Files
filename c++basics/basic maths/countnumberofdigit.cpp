#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER:"<<endl;
    cin>>n;
    // int count=0;
    // while(n>0){
        
        
    //     n=n/10;
    //     count+=1;
    // }
    // cout<<count;
    int count=(int)(log10(n)+1);
    cout<<count;

}