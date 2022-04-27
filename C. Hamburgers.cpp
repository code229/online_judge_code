#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    long long nb,ns,nc,pb,ps,pc,r,ans=0;
    cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    map<char,long long>mp;
    mp.insert({'B',0});
    mp.insert({'S',0});
    mp.insert({'C',0});
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    //cout<<mp['S'];
    long long mn;
    if(mp['B']!=0) mn=nb/mp['B'];
     if(mp['S']!=0) mn=min(mn,ns/mp['S']);
      if(mp['C']!=0) mn=min(mn,nc/mp['C']);
    nb-=(mp['B']*mn);
    ns-=(mp['S']*mn);
    nc-=(mp['C']*mn);
    ans+=mn;
  //cout<<nb<<" "<<ns<<" "<<nc<<" "<<ans<<endl;
    while(1){
        if(r==0) {
            cout<<ans;
            return 0;
        }

        long long nB=0,nS=0,nC=0;
        if(mp['B']!=0) nB=max((long long)0,mp['B']-nb);
        if(nb!=0 and mp['B']!=0) {
                nb-=mp['B'];
                nb=max((long long)0,nb);
        }
         if(mp['S']!=0)nS=max((long long)0,mp['S']-ns);
        if(ns!=0 and mp['S']!=0) {
                ns-=mp['S'];
                ns=max((long long)0,ns);
        }
        if(mp['C']!=0) nC=max((long long)0,mp['C']-nc);
        if(nc!=0 and mp['C']!=0) {
                nc-=mp['C'];
                nc=max((long long)0,nc);
        }
        long long cost=nB*pb+nS*ps+nC*pc;
         //cout<<nB<<" "<<nS<<" "<<nC<<" "<<cost<<endl;
        if(cost>r){
           cout<<ans;
            return 0;
        }
        ans+=1;
  // cout<<ans;
        r-=cost;
        if((nb==0 or mp['B']==0) and (ns==0 or mp['S']==0)and (nc==0 or mp['C']==0)){
            break;
        }
    }
   // cout<<ans;
    long long l=mp['B']*pb+mp['S']*ps+mp['C']*pc;
    ans+=r/l;
    cout<<ans;

}
