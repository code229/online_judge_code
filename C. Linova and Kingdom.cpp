#include <bits/stdc++.h>
#define maxn 200005
using namespace std;
int dph[maxn]={0};
int sz[maxn]={0};
int ans[maxn];
vector<int>adj[maxn];
int n,k,u,v;
long long solve=0;+
int comp(int a,int b){
    return a>b;
}
int dfs(int u,int f){
    dph[u]=dph[f]+1;
    sz[u]=1;
    for(int i=0;i<adj[u].size();i++){
        if((v=adj[u][i])==f) continue;
        sz[u]+=dfs(v,u);
    }
    ans[u]=sz[u]-dph[u];
    return sz[u];
}
int main(){
    cin>>n>>k;
    for(int i=1;i<n;i++){
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    nth_element(ans+1,ans+n-k,ans+n+1,comp);
    for(int i=1;i<=n-k;i++) solve+=ans[i];
    cout<<solve;
    return 0;

}
