#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"ENTER THE NAME:"<<endl;
    cin>>name;
    cout<<"BEFORE:      "<<name<<endl;
    for (int i=0;i<=sizeof(name);i++){
        if (islower(name[i])){
            if(name[i]=='z'){
                name[i]='a';
            }
            else{
                name[i]++;
            }
        }
    }
    cout<<"AFTER:       "<<name<<endl;

}
