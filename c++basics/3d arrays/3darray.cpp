#include<iostream>

using namespace std;
int main(){
    string empname[2][3][3];
    int d=2;
    int r=3;
    int c=3;
    for(int k=0;k<d;k++){
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                cout<<"ENTER NAME AT["<<k<<"]["<<i<<"]["<<j<<"]= ";
                cin>>empname[k][i][j];

            }
        }
    }
    string a;
    cout<<"ENTER THE ELEMENT YOU WANT TO FIND:\n";
    cin>>a;


    for(int k=0;k<d;k++){
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                if (empname[k][i][j]==a){
                    cout<<"FOUND at"<<k<<i<<j;
                    break;
                }
                
            }
        }
    
    }


    // for(int k=0;k<d;k++){
    //     for (int i=0;i<r;i++){
    //         for (int j=0;j<c;j++){
    //             cout<<"\nNAME AT["<<k<<"]["<<i<<"]["<<j<<"]= "<<empname[k][i][j];
                
    //         }
    //     }
    //     cout<<endl;
    // }


}