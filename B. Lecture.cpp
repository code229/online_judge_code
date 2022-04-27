#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    string s,s1;
    for(int i=0;i<m;i++){
        cin>>s>>s1;
        mp.insert({s,s1});
    }
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
        int nk=mp[s].size();
        if(s.size()<=nk) v.push_back(s);
        else v.push_back(mp[s]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
