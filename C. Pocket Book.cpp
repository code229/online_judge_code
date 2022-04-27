
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
   int n,m;
   cin>>n>>m;
   vector<string>v;
   string s;
   set<char>ss;
   long long ans=1;
   for(int i=0;i<n;i++) {
    cin>>s;
    v.push_back(s);
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        ss.insert(v[j][i]);
    }
    ans=(ans*(ss.size()))%mod;
    ss.clear();
   }
   cout<<ans;
}
