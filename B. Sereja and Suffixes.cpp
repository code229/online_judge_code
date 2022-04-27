#include<bits/stdc++.h>
using namespace std;
int a[100005];
int val[100005];
int main()
{
    int n,m;
    cin>>n>>m;
    memset(a,0,sizeof(a));
    int k;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    for(int i=n;i>=1;i--){
       if(mp[val[i]]==0){
           a[i]=a[i+1]+1;
           mp[val[i]]=i;
       }
       else a[i]=a[i+1];

    }
    for(int i=0;i<m;i++){
        cin>>k;
        cout<<a[k]<<endl;
    }

}
