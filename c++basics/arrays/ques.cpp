#include<iostream>
using namespace std;
int maxxx(int arr[],int len){
    int maxx=0;
    for (int i=0;i<len;i++){
        if (arr[i]>maxx){
            maxx=arr[i];
        }
    }
    return maxx;
}
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int len=sizeof(arr)/sizeof(arr[0]);
    int ans=maxxx(arr,n);
    cout<<"THE MAX ELEMENT IS :"<<ans;
    
}