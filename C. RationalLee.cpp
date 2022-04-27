
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       int sz=n+1;
       int a[sz];
       for(int i=1;i<=n;i++) cin>>a[i];
       sort(a+1,a+sz);
      // reverse(a+1,a+sz);
       int l;
       int b=1;
       long long ans=0;
       vector<int>v;
       for(int i=0;i<k;i++){
        cin>>l;
        if(l==1){
            ans+=2*(a[n]);
            n--;
            continue;
        }
        v.push_back(l);
       }
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
      for(int i=n,j=0;j<v.size();j++,i--) ans+=a[i];
      for(int i=1,j=0;j<v.size();i+=(v[j]-1),j++) ans+=a[i];
       cout<<ans<<endl;
    }
    //17 13 7 1
}
