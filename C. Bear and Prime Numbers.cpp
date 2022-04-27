
#include "bits/stdc++.h"
using namespace std;

#define MAXN   10000001
int cnt[10000004]={0};
int spf[MAXN];

void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

set<int> getFactorization(int x)
{
    set<int> ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;

}
int ans[10000001]={0};
map<int,int>mp;
int main(int argc, char const *argv[])
{
    sieve();
    int n,k,q,l,r;
    cin>>n;

    while(n--){
        scanf("%d",&k);
        mp[k]++;
        //getFactorization(k);
    }
    map<int,int>::iterator t;
    for(t=mp.begin();t!=mp.end();t++){
     //   cout<<t->first<<endl;
        set<int>ret=getFactorization(t->first);
        set<int>::iterator it;
     //   cout<<"s"<<t->second<<endl;
        for(it=ret.begin();it!=ret.end();it++){
            cnt[*it]+=(t->second);
          //  cout<<t->second<<" ";
        }
       // cout<<endl;
    }
   // cout<<cnt[2]<<"c";
    cin>>q;
    for(int i=2;i<=10000000;i++){
        ans[i]=ans[i-1]+cnt[i];

    }
    while(q--){
        cin>>l>>r;

      printf("%d\n",ans[min(r,10000000)]-ans[min(l-1,10000000)]);

    }

}
