#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        map<int,int>mp;
        vector<int>v[27];
        string s,t;
        cin>>s;
        for(int i=0;i<s.size();i++){
            int val=s[i]-'a';
            mp.insert({val,1});
            v[val].push_back(i);
        }
        cin>>t;
        int flag=0;
        int cnt=1;
        int mx;
        if(mp[t[0]-'a']==0) {
            cout<<-1<<endl;
            continue;
        }
        else  {
                mx=v[t[0]-'a'][0];
        int st=0;
        for(int i=1;i<t.size();i++){
            int vl=t[i]-'a';
            int vl1=t[i-1]-'a';
            if(mp[vl]==0){
                flag=1;
                break;
            }
            int f=0;
            int it=upper_bound(v[vl].begin(),v[vl].end(),mx)-v[vl].begin();
            if(it>=v[vl].size()){
                cnt++;
                mx=v[vl][0];
            }
            else mx=v[vl][it];

        }

    if(flag==1) cout<<"-1"<<endl;
    else cout<<cnt<<endl;
        }
    }
}
