

#include<bits/stdc++.h>
using namespace std;
#define mx 10000

int main()
{


  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n],b=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<1024;i++){
        map<int,int>mp;
        for(int j=0;j<n;j++){
            int aa=a[j]^i;
            mp.insert({aa,1});
        }
        int flag=0;
        for(int j=0;j<n;j++){
            if(mp[a[j]]==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
            b=1;
            break;
        }
    }
    if(b==0) cout<<"-1"<<endl;
  }

}
