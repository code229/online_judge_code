#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int k;
    cin>>k;
    int ar[26],mx=0;
    for(int i=0;i<26;i++){
        cin>>ar[i];
        mx=max(mx,ar[i]);
    }
    long long ans=0;
    for(int i=0;i<s.size();i++){
        ans+=(ar[s[i]-'a']*(i+1));
    }
    for(int i=s.size()+1;i<=(s.size()+k);i++){
        ans+=(mx*i);
    }
    cout<<ans;
}
