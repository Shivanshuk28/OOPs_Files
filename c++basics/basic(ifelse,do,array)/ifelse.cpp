#include<iostream>
#include<bits/stdc++.h>
//Write a program to inpput a age and 
// print if adult or a child
using namespace std;
int main(){
    int age;
    cout << "Enter Your Age:";
    cin>> age;
    if (age>=18){
        cout<< "You are adult";
    }
    else{
        cout<< "You are a child";
    }
}
