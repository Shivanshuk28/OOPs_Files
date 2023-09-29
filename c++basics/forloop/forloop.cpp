#include<iostream>
using namespace std;
int main(){
    char arr1[]{'a','b','c','d','\0'};
    for(char c: arr1)
    cout<<c;
    char arr[]={"\n hello"};

    cout<<arr;


    char arr2[]{"\nhello"};
    cout<<arr2<<endl;
    cout<<arr2[3]<<endl;

    char arr3[]{"hi my name is shivanshu"};
    cout<<arr3[3]<<endl;

    string name="howareyou";
    cout<<name[4];
}