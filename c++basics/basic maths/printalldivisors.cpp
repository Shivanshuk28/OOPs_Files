#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void divisors(int num){
    for(int i=1;i<=sqrt(num);i++){
        if (num%i==0){
            cout<<i<<" ";
            if (num/i!=i){
                cout<<num/i<<" ";
            }
        }

    }
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER:\n";
    cin>>n;
    // vector<int>ls;
    divisors(n);
    return 0;
    
}




