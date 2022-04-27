#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--){
        cin>>a>>b;
        if(a>b){
            if(abs(a-b)%2==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else if(b>a){
            if(abs(a-b)%2==0) cout<<2<<endl;
            else cout<<1<<endl;
        }
        else cout<<0<<endl;
    }
}
