// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int num=n;
//     int arm=0;
//     int c=0;
//     while(num!=0){
//         num=num/10;
//         c++;
//     }
//     cout<<c<<endl;
//     while(n>0){
//         int digit=n%10;
//         arm+=round(pow(digit,c));
//         n=n/10;
//     }
//     cout<<arm;
// }
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER:\n";
    cin>>n;

    int numc=n;
    int c=0;
    int arm=0;
    int num=n;


    while(numc!=0){
        numc=numc/10;
        c++;
    }
    while(n>0){
        int digit=n%10;
        arm+=round(pow(digit,c));
        n=n/10;
    }
    if (arm==num){
        cout<<"true\n";

    }
    else{
        cout<<"false\n";

    }
    cout<<arm;
}