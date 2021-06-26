#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s[0]-'0';
        int ans=0;
        ans+=(sz-1)*10;
        sz=s.size();
        ans+=((sz)*(sz+1))/2;
        cout<<ans<<endl;
    }
}
