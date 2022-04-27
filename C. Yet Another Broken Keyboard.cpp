#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    char ar[m];
    for(int i=0;i<m;i++){
        cin>>ar[i];
    }

    long long cnt=0;
    vector<long long>v;
    for(int i=0;i<s.size();i++){
        int flag=0;
       // cout<<s[i]<<" ";
        for(int j=0;j<m;j++){
            if(s[i]==ar[j]) {
                    flag=1;

                    break;

            }

        }
       // cout<<flag<<" ";
        if(flag==0) {
                v.push_back(cnt);
                cnt=0;

        }
        else{

            cnt++;
        }
    }
    v.push_back(cnt);
    long long ans=0;

    for(int i=0;i<v.size();i++)
    {
       // cout<<v[i];
        ans+=((v[i]*(v[i]+1))/2);
    }
    cout<<ans<<endl;

}
