#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int mx=max(a,max(b,c));
        int sum=0;
        sum+=(mx-a);
        sum+=(mx-b);
        sum+=(mx-c);
        if(sum>n){
            cout<<"NO"<<endl;
            continue;
        }
        if((n-sum)%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
