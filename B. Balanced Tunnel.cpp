#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1],p[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
       // p[a[i]]=i;
    }
   for(int i=1;i<=n;i++){
    cin>>b[i];
    p[b[i]]=i;

   }
   int mx=p[a[1]],cnt=0;
    for(int i=2;i<=n;i++){
        if(p[a[i]]<mx)  cnt++;
        mx=max(mx,p[a[i]]);
    }
    cout<<cnt;
}
