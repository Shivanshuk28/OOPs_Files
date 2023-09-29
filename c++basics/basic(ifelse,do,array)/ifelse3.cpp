#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"ENTER you age:";
    cin>> age;
    if (age <18){
        cout<<"NOT ELIGIBKE FOR JOB";

    }
    
    
    else if (age<=57){
        cout<<"ELIGIBle for job";
        if (age>=55){
            cout<<",but retiremnt soon";
        }

    }
    else if (age>57){
        cout<<"retirement time";
        }
        
        return 0;
}