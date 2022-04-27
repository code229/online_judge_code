#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
   string s;
   cin>>s;
   int cnt[2]={0};
   for(auto &it:s){
    cnt[it-'0']++;
   }
   int cnt1[2]={0};
   int ans=s.size();
   for(auto &it:s){
    cnt[it-'0']--;
    cnt1[it-'0']++;
    ans=min(ans,cnt1[1]+cnt[0]);
    ans=min(ans,cnt1[0]+cnt[1]);
   }
   cout<<ans<<endl;



}
}

