#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int nn;
        cin>>nn;
        map<pair<int,int> ,int>mp;
        string s;
        cin>>s;
        int x=0,y=0,st=-1,lt=-1;
        mp.insert({make_pair(0,0),1});
        int mn=INT_MAX;
        for(int i=0;i<nn;i++){
            if(s[i]=='L'){
                x--;
            }
            else if(s[i]=='R') x++;
            else if(s[i]=='U') y++;
            else if(s[i]=='D') y--;

            if(mp[{x,y}]==0){
                mp[{x,y}]=i+2;
            }
            else{
                if(((i+1)-mp[{x,y}])<mn){
                    st=mp[{x,y}];
                    lt=i+1;
                    mn=(i+1)-mp[{x,y}];
                }
                mp[{x,y}]=i+2;
            }
        }
        if(lt!=-1 && st!=-1) cout<<st<<" "<<lt<<endl;
        else cout<<"-1"<<endl;

    }


}
