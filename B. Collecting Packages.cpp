#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int tt;
        cin>>tt;
        vector<pair<int,int> >v;
        for(int i=0;i<tt;i++){
            int a,b;
            cin>>a>>b;
           v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());

        int flag=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i].second>v[i+1].second){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
            for(int i=0;i<v[0].first;i++) cout<<"R";
            for(int i=0;i<v[0].second;i++) cout<<"U";
            for(int i=0;i<v.size()-1;i++){
                int a=v[i].first;
                int b=v[i].second;
                for(int j=0;j<(v[i+1].first-a);j++) cout<<"R";
                for(int j=0;j<(v[i+1].second-b);j++) cout<<"U";
            }
            cout<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }


    }
}
