#include<iostream>

using namespace std;
int main(){
    int total;
    int arr[3][3];
    int rows;
    int cols;
    cout<<"ENTER TOTAL ELEMENTS:\n";
    cin>>total;
    cout<<"ENTER THE NUMBER OF ROWS:\n";
    cin>>rows;
    cout<<"ENTER THE NUMBER OF COLUMNS:\n";
    cin>>cols;
    int nrow;
    int ncol;
    for(int i=0;i<total;i++){
        nrow=i/cols;
        ncol=i%cols;
        cin>>arr[nrow][ncol];

    }

    for(int i=0;i<total;i++){
        nrow=i/cols;
        ncol=i%cols;
        cout<<arr[nrow][ncol]<<"  ";

    }

}