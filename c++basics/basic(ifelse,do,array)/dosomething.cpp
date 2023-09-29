#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void some(string &s){
    s[0]='t';
    cout<<s<<endl;


}
int main(){
    string sio;
    cin>> sio;
    some(sio);
    cout<<sio<<endl;
    return 0;


}