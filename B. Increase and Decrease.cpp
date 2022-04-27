#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ans=0;
    int k;
    for(int i=0;i<n;i++) cin>>k,ans+=k;
    if(ans%n==0) cout<<n;
    else cout<<n-1;
}
