


                                                 //بسم الله الرحمن الرحيم
                                                      //الله أكبر

                                              //█▀█─█──█──█▀█─█─█
                                              //█▄█─█──█──█▄█─█▄█
                                              //█─█─█▄─█▄─█─█─█─█

#pragma warning(disable:4786)
#pragma warning(disable:4996)
#include<bits/stdc++.h>
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define pii pair<int,int>
#define pll pair<long long ,long long>
#define pli pair<long long , int>
#define pil pair<int ,long long>
#define pi acos(-1)
#define pb push_back
#define mkp make_pair
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MAX 300005
#define INF 0x3f3f3f3f
#define vi vector<int>
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;
vi children[2001];
ll big_mod(ll a,ll b,ll m){
    a%=m;
    ll res=1;
    while(b>0){
        if(b&1)
            res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;

}
ll binpow(ll a,long long b){
    if(b==0)
        return 1;
    long long res=binpow(a,b/2);
    if(b%2==1)
        return res*res*a;
    else
        return res*res;
}
ll binpow_iterative(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
            if (b & 1)
                res = res * a;
             a = a * a;
             b >>= 1;
         }
    return res;
}
//first aproach using tree
int getHight(int n){
    if(children[n].empty()){
        return 0;
    }
    int h=0;
    for(int i=0;i<children[n].size();i++){
        h=max(h,getHight(children[n][i]));
    }
    return h+1;
}
//second aproach using bfs
int getHight_bfs(int n){
    queue <int> q;
        q.push(n);
        int level[2001];
        level[ n ] = 0 ;  //Setting the level of the source node as 0

        bool vis[2001];
         vis[ n ] = true;
         int h=0;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < children[ p ].size() ; i++)
            {
                if(vis[ children[ p ][ i ] ] == false)
                {
            //Setting the level of each node with an increment in the level of parent node
                    level[ children[ p ][ i ] ] = level[ p ]+1;
                    h=max(level[ children[ p ][ i ] ],h);
                     q.push(children[ p ][ i ]);
                     vis[ children[ p ][ i ] ] = true;
      }
            }
        }
        return h;
}
int main(){
    IOS
    //freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int a[n+1];
    //int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        /*if(a[i]!=-1){
            children[a[i]].push_back(i);
        }*/
    }
    int hight=0;
    //third aproach using loop
    for(int i=1;i<=n;i++){
        int cnt=1;
        int j=i;
        while(a[j]!=-1){
           j=a[j];
           cnt++;
        }
        hight=max(cnt,hight);
    }
    /*int hight=0;
    for(int i=1;i<=n;i++){
        if(a[i]==-1){
            hight=max(hight,getHight_bfs(i));
        }
    }*/
    cout<<hight;



}
