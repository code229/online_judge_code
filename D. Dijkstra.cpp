
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
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define MAX 300005
#define INF 0x3f3f3f3f
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;
#define INF 0x3f3f3f3f
vector<pii> adj[200001];
int V;
void addedge(int u,int v,int w){
    adj[u].pb(mkp(v,w));
    adj[v].pb(mkp(u,w));
}
int shortest_path(int src,int t){
    priority_queue<pii> pq;

    vll dist(V+1,INF);
    pq.push(make_pair(0, src));
    dist[src]=0;

    while(!pq.empty()){
        int u=pq.top().second;

        pq.pop();

        vector<pii> :: iterator i;
        for(i=adj[u].begin();i!=adj[u].end();i++){
            int v=(*i).first;
            ll weight=(*i).second;
            if(dist[v]>dist[u]+weight){
                    dist[v]=dist[u]+weight;
            pq.push(mkp(dist[v],v));

            }
        }
    }
    return dist[t];
}

int main(){
    IOS
    //freopen("output.txt","w",stdout);
    int n,m;
    cin>>V>>m;
    int a,b,w;
    while(m--){
       cin>>a>>b>>w;
       addedge(a,b,w);
    }
   if(shortest_path(1,V)!=INF) cout<<shortest_path(1,V);
   else cout<<"-1";


}
