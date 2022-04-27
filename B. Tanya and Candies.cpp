#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n+1];
   int ao=0,ae=0;
   for(int i=1;i<=n;i++){
    cin>>a[i];
    if(i%2==0) ae+=a[i];
    else ao+=a[i];
     }
  // cout<<ae<<" "<<ao<<endl;
   int ano=0,ane=0,ans=0;
   for(int i=1;i<=n;i++){
    int e=ae,o=ao;
    e-=ane;
    o-=ano;
    if(i%2==0) e-=a[i];
    else o-=a[i];
    int cnt=e+ano,cnt1=o+ane;
    if(cnt==cnt1) ans++;
    if(i%2==0) ane+=a[i];
    else ano+=a[i];
   }
   cout<<ans;
}
