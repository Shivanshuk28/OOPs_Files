#include<iostream>

using namespace std;
// void makingzero(int arr[trows][tcols],int trows,int tcols){
int main(){
    int trows=3;
    int tcols=3;
    int arr[trows][tcols];
    cout<<"ENTER THE ELEMENTS\n";
    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            cin>>arr[rows][cols];
        }
    }
    for(int i=0;i<trows;i++){
        for(int j=0;i<tcols;j++){
            if (arr[i][j]==0){
                int g=i;

                for (int c=0;c<tcols;c++){
                    arr[g][c]=-1;
                }
                
                int h=j;
                for (int d=0;d<trows;d++){
                    arr[d][h]=-1;
                }
            }
        }
    }

    for(int i=0;i<trows;i++){
        for(int j=0;i<tcols;j++){
            if (arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }

    for(int rows=0;rows<trows;rows++){
        for (int cols=0;cols<tcols;cols++){
            cout<<arr[rows][cols]<<"  ";
        }
        cout<<endl;
    }
}