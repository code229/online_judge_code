#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100005];
int cat[100005];
int V;
void addedge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int dfs(int k)
{
    vector<bool>visited(V+1,false);

    stack<int>stack;
    stack.push(1);
    int cnt=0,s,block=0;
    if(cat[1]==1)
        block++;
    while (!stack.empty())
    {
        s = stack.top();
        stack.pop();
        if (!visited[s])
            visited[s] = true;

        int ct=0;
        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                ct++;
                if(cat[s]==0)
                {
                    stack.push(*i);
                }
                else
                {

                    if(cat[*i]==1 && cat[s]<=(k-1))
                    {
                        cat[*i]=cat[s]+1;
                        stack.push(*i);
                    }
                    else if(cat[*i]==0)
                    {
                        stack.push(*i);
                    }
                }
            }
        }
        if(ct==0)
            cnt++;
    }
    return cnt;
}

int main()
{
    int n,m;
    cin>>V>>m;
    for(int i=1; i<=V; i++)
    {
        cin>>cat[i];
    }
    int a,b,rot=0;
    for(int i=1; i<V; i++)
    {
        cin>>a>>b;
        addedge(a,b);
    }
    cout<<dfs(m);
}
