#include<bits/stdc++.h>
using namespace std;
long long fibo[100001];
int main()
{
    int mod=1000000007;
    int n,m;
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=100000;i++) fibo[i]=(fibo[i-1]+fibo[i-2]+1)%mod;
    cin>>n>>m;
    cout<<(fibo[n]+fibo[m])%mod;

}
