
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                int cnt=0;
                for(int j=i+1;j<s.size();j++){
                    if(s[j]=='P') cnt++;
                    else break;
                }

                   ans=max(cnt,ans);
            }
        }
        cout<<ans<<endl;
    }
}
