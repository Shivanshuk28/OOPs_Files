#include<bits/stdc++.h>
using namespace std;

void pat1(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void pat2(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pat3(int n){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pat4(int n){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat5(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<" ";
            }
            for (int j=1;j<=i;j++){
                cout<<"*";

            }
            for(int j=1;j<=i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

void pat6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void pat7(int n){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<" ";
            }
            for (int j=1;j<=i;j++){
                cout<<"*";

            }
            for(int j=1;j<=i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }

}
void pat8(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pat9(int n){
    int start=1;
    
    for (int i=1;i<=n;i++){
        if (i%2==1) start=1;
        else start=0;
        for (int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }


}
void pat10(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;

        }
        for(int j=1;j<=2*n-(2*i);j++){
            cout<<" ";

        }
        int k=i;
        for (int j=1;j<=i;j++){
            cout<<k;
            k--;
        }
        cout<<endl;
    }

}

void pat11(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<k<<" " ;
            k++;

        }
        cout<<endl;
    }

}
void pat12(int n){
    for(int i=0;i<n;i++){
        for (char j='A';j<='A'+i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pat13(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<'A'+n-i;j++){
            cout<<j;

        }
        cout<<endl;
    }
}
void pat14(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for (int j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pat15(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }    
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch;
        }
        cout<<endl;
}
}
void pat16(int n){
    for(int i=0;i<n;i++){
        char ch='E';
        for(char j=('A'+n-1)-i;j<='A'+n-1;j++){
            cout<<j;


        }
        cout<<endl;
    }
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("inout.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int n;
    cout<<"Enter the numebr"<<endl;
    cin>>n;
    pat16(n);
    
    

}

