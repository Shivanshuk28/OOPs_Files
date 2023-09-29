#include<iostream>
using namespace std;

int conc(int nums[],int n,int ans[]){
    for (int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    for(int i=0;i<2*n;i++){
        cout<<ans[i];
    }
    
}

int main(){
int n;
cout<<"ENTER THE SIZE:\n";
cin>>n;
int ans[2*n];

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    conc(nums,n,ans);
}