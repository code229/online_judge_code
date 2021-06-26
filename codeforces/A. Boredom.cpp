#include<bits/stdc++.h>
using namespace std;
long long a[100001];
int main(){
    int n;
    cin>>n;

    memset(a,0,sizeof(a));
    int mx=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        mx=max(mx,k);
        a[k]++;
    }
   // cout<<a[100000];
    a[0]=0;
    a[1]=a[1];

    for(long long i=2;i<=mx;i++){
        a[i]=max(a[i-1],a[i-2]+i*a[i]);
    }
    cout<<a[mx];
}
