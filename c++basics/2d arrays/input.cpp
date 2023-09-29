#include<iostream>

using namespace std;
int main(){
    int trows=3;
    int tcols=3;
    int arr[trows][tcols];
    cout<<"ENTER THE ELMENTS\n";
    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            cin>>arr[rows][cols];
        }
    }


    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            cout<<arr[rows][cols]<<"  ";
        }
        cout<<endl;
    }
}
 