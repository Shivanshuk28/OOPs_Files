#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5,6};
    // int *ptr;
    // ptr=arr;
    // cout<<*arr<<endl;
    // cout<<*ptr<<endl;

    // cout<<*ptr+1<<endl;

    // for (int i=0;i<6;i++){
    //     cout<<*(arr+i)<<endl;
    // }

    // for (int i=0;i<6;i++){
    //     cout<<&arr[i]<<endl;
    // }

    string name[]={"hello","how","are","you"};
    string *ptr=nullptr;
    ptr=name;
    cout<<*name<<endl;


    cout<<*ptr<<endl;
    cout<<endl<<endl; 


    // for(int i=0;i<4;i++){
    //     cout<<*(ptr+i)<<endl;
    // }

    // for(int i=0;i<4;i++){
    //     cout<<(int)&ptr[i]<<endl;
    // }


    for(int i=0;i<4;i++){
        for(int j=0;j<name[i].length();j++){
            cout<<(int)&name[i][j]<<endl;
            cout<<&name[i][j]<<endl;
    }
    cout<<endl;
}
}