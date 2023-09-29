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

    int arr2[trows][tcols];
    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            arr2[cols][trows-rows-1]=arr[rows][cols];
        }
    }

    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            cout<<arr[rows][cols]<<"  ";
        }
        cout<<endl;
    }

cout<<endl;
    cout<<endl;
    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            cout<<arr2[rows][cols]<<"  ";
        }
        cout<<endl;
    }

    }