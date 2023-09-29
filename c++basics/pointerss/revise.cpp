#include<iostream>
using namespace std;
int main()
{
string name0="hello";
string name1={"hello","world"};
string name2[]={"hello","world","how"};
char name3[]={"world"};
char name4[]={'h','e','l','l','o',};
string *pn0;
string *pn1;
string *pn2;
char *pn3;
char *pn4;
pn0=&name0;//string name0="hello";
pn1=&name1;//string name1={"hello","world"};
pn2=name2;//string name2[]={"hello","world","how"};
pn3=name3;//char name3[]={"hello"};
pn4=name4;//char name4[]={'h','e','l','l','o'};
cout<<pn0<<endl;
cout<<pn1<<endl;
cout<<*(pn2+1)<<endl;
cout<<*pn3<<endl;
cout<<pn4<<endl;
}