#include<bits/stdc++.h>
using namespace std;
#define mx 500*500+10
int dx4[]={1,-1,0,0}; // 4-direction...........
int dy4[]={0,0,1,-1};
//
vector<int>adj[mx];
map<int,int>mp;
map<int,int>x;
int cnt=0,l;
char a[500][500];
void addEdge(int u, int v)
{
    adj[u].push_back(v);
   // adj[v].push_back(u);
}
vector<bool> visited(mx, false);
stack<int> stk;
void dfs(int s,int ss,int k){
   // vector<bool> visited(mx, false);


    stk.push(s);
    vector<int>v;
    while (!stk.empty())
    {

        s = stk.top();
        stk.pop();
        if (!visited[s])
        {
             if(ss-k==cnt){
                    return;
                }
                x.insert({s,1});
                cnt++;
               // cout<<s<<" ";
            visited[s] = true;
        }

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i]){

                stk.push(*i);
            }
    }
   // return v.size();
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ct=0;
    int s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='.') ct++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                //cout<<a[i][j];
            if(a[i][j]=='.'){
            for(int k=0;k<4;k++){
            int dx=dx4[k]+i;
            int dy=dy4[k]+j;
            if(dx>=0 and dx<n and dy>=0 and dy<m and a[dx][dy]=='.'){
                int ind=(m*dx+dy);
                int n=(m*i+j);
                s=n;
                addEdge(n,ind);
                //cout<<n<<" "<<ind<<endl;
                mp.insert({n,1});
                mp.insert({ind,1});

            }
            }
        }
        }
    }


l=mp.size();
//cout<<l<<" k";
   // map<int,int>:: iterator t;
   //cout<<s;
   if(k==0){
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
   }
   dfs(s,ct,k);

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x[m*i+j]!=1 and a[i][j]=='.') cout<<"X";
            else cout<<a[i][j];
        }
        cout<<endl;
    }

}
