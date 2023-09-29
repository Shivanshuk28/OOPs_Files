#include<iostream>
using namespace std;

void printarr(int arr[],int len){
    for (int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]{1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<len<<endl;
    printarr(arr,len);

}