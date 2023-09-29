#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,n;
    cout<<"Enter the number";
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        cout<< "\n";
    }

    return 0;
}



