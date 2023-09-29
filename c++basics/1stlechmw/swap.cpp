#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}

int main(){
    int num1;
    int num2;
    cout<<"ENTER NUMBER 1"<<endl;
    
    cin>>num1;
    cout<<"ENTER NUMBER 2"<<endl;
    cin>>num2;
    cout<<"THE VALUE OF A and B before swapping is   "<<num1<<"   "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"THE VALUE OF A and B after  swapping is   "<<num1<<"   "<<num2<<endl;

}