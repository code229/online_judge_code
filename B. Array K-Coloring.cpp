#include<bits/stdc++.h>
using namespace std;

int main()
{
   /* int n,k;
    cin>>n>>k;
    vector<int>v;
    set<int>s;
    int cne[10000];
    memset(cne,0,sizeof(cne));
    map<int,int>mp;
    int mx=0;
    for(int i=0;i<n;i++){
        int nn;
        cin>>nn;
        v.push_back(nn);
        s.insert(nn);
        mp.insert(make_pair(nn,0));
        cne[nn]++;
        mx=max(mx,cne[nn]);
    }
   // cout<<mx<<" "<<s.size();
    if(mx>k) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    int c=1;
   // int kk;
    for(int i=0;i<n;i++)
    {
        if(mp[v[i]]==0){
            if(c>k) {
                    c=1;
            }
            mp[v[i]]=c;
           cout<<c<<" ";
            c++;
        }
        else{
            if(mp[v[i]]==k){
                mp[v[i]]=1;
                c=2;
                cout<<1<<" ";
            }
            else{
                int k1=mp[v[i]];
                k1++;
                mp[v[i]]=k1;
                int kk=k1;
                c=kk+1;
                cout<<k1<<" ";
            }
        }
    }*/
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int>v;
    int st[10000];
    memset(st,0,sizeof(st));
    int conti[10000];
    int cne[10000];
    memset(cne,0,sizeof(cne));
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cne[a[i]]++;
        v.push_back(a[i]);
        mx=max(mx,cne[a[i]]);
        conti[a[i]]=0;
    }
    if(mx>k) {
        cout<<"NO";
        return 0;
    }
    sort(v.begin(),v.end());
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        if(st[v[i]]==0){
            int c=(i+1)%k;
            if(c==0) c=k;
            st[v[i]]=c;

        }
     //   cout<<v[i]<<" "<<st[v[i]]<<endl;
    }
    for(int i=0;i<n;i++){
        if(conti[a[i]]==0){
            cout<<st[a[i]]<<" ";
            if(st[a[i]]==k) conti[a[i]]=1;
            else conti[a[i]]=(st[a[i]]+1);
        }
        else{
            cout<<conti[a[i]]<<" ";
        }
    }


}
