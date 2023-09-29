#include<iostream>

using namespace std;
int main(){
    int rows=0;
    int cols=0;
    
    cout<<"ENTER THE NUMBER OF ROWS:\n";
    cin>>rows;
    cout<<"ENTER THE NUMBER OF COLS\n";
    cin>>cols;
    int arr[rows][cols];
    cout<<"ENTER THE ELEMENTS:\n";
    int top=0;
    int bottom=rows-1;
    int left=0;
    int right=cols-1;
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    while(left<=right && top<=bottom){
        for (int i=left;i<=right;i++){
            cout<<arr[top][i];
        }top++;


        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right];
        }right--;


        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i];
        }bottom--;


        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left];
        }left++;
    }

}