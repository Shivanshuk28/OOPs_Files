#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,40,100,80};
    int max1=0;
    int max2=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++){
        if (arr[i]>max1){
            max2=max1;
            max1=arr[i];
            
        }
        else if (arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
        }
        
    }
    cout<<max2;
}