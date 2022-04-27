#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i=0;i<=m;i++){
        cin>>a[i];
    }
    int frnd=0;
    for(int i=0;i<m;i++){

        if(__builtin_popcount(a[m]^a[i])<=k) frnd++;
    }

    cout<<frnd;
}
