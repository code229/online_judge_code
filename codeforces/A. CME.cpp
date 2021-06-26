#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        if(a==2) cout<<2<<endl;
        else if(a%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
}
