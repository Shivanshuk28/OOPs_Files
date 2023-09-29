#include<iostream>
#include<iomanip>
#include<ios>

using namespace std;

int main(){
    float a=27.639284;
    double b=2276.843698974;
    streamsize pre=cout.precision();
    cout<<setprecision(5)<<a<<endl;
    cout<<setprecision(pre);

    cout<<a<<"        "<<b;
}