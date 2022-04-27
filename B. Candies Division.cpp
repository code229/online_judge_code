#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int res=0;
        res=(n/k)*k;
        if(n%k!=0){
            res+=min(n%k,k/2);
        }
        cout<<res<<endl;
    }
}
