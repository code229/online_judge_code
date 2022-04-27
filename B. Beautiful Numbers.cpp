#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n+1];
    int po[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        po[a[i]]=i;
    }
    int mx=po[1];
    int mn=po[1];
    string s="";
  cout<<"1";
    int gp=0;
    for(int i=2;i<=n;i++){
        mn=min(mn,po[i]);
        mx=max(mx,po[i]);
        if(((mx-mn)+1)==i){
           // s[i-1]+='1';
           cout<<"1";
        }
        else cout<<"0";
    }
    cout<<endl;
  }
}
