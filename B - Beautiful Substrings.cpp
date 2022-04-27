#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v[27];
        vector<pair<int,int> >pos;
        map<pair<int,int>,int>mp;
        cin>>a;
        cin>>b;
        for(int i=0;i<=a.size()-k;i++){
          int f=a[i]-'a';
          int l=a[i+k-1]-'a';
          pos.push_back(make_pair(f,l));
        }
        for(int i=0;i<b.size();i++){
            v[b[i]-'a'].push_back(i);
        }
        int cnt=0;
        for(int i=0;i<pos.size();i++){
                int ff=pos[i].first;
                 int ll=pos[i].second;
            if(!v[ff].empty()){
                for(int j=0;j<v[ff].size();j++){
                    for(int kk=0;kk<v[ll].size();kk++){
                        if(v[ll][kk]>=v[ff][j]){
                            if(mp[{v[ll][kk],v[ff][j]}]==0){
                                cnt++;
                                mp[{v[ll][kk],v[ff][j]}]=1;

                            }

                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;

    }
}
