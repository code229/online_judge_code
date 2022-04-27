#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int tt;
        cin>>tt;
        int princes[tt+1];
        map<int,int>mp;
        vector<int>v;
        for(int j=1;j<=tt;j++){
            int tn,k;
            cin>>tn;
            int flag=0;
            for(int i=0;i<tn;i++){
                cin>>k;
                if(flag==0){
                    if(mp[k]==0){
                        mp[k]=j;
                        flag=1;
                    }
                }
            }
            if(flag==0) v.push_back(j);
        }
        if(v.empty()) cout<<"OPTIMAL"<<endl;
        else{
            for(int i=1;i<=tt;i++){
                if(mp[i]==0){
                    cout<<"IMPROVE"<<endl;
                    cout<<v[0]<<" "<<i<<endl;
                    break;
                }
            }
        }
    }
}
