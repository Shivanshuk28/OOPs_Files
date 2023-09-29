#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void push(int arr[],int top,int ele){
    arr[top]=ele;
}
void pop(int arr[],int top,int size){
    if(top>0){
        arr[top]=arr[top-1];
    }
    else{
            arr[top]=arr[size+1];
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Give size of stack ";
    cin>>n;
    int arr[n],top=n-1;
    while(true){
        int choice;
        cout<<"\nEnter 1 to Push\t2.Pop \t3.Display : ";
        cin>>choice;
        switch(choice){
            case 1:
                if(top>=0){
                    int ele;
                    cin >>ele;   
                    push(arr,top,ele);
                    top--;
                }
                else{
                    cout<<"Stack is full";
                }
                break;
            case 2:
                pop(arr,top,n);
                if(top<n-1){
                    top++;
                }
                else{
                    cout<<"Stack empty"<<endl;
                }
                break;
            case 3:
                display(arr,n);
                break;
            case 4:
                cout<<top<<endl;
                break;
        }
    }
}
