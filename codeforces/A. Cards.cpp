#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    int z=0,n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='z') z++;
        if(s[i]=='n') n++;

    }
    for(int i=0;i<n;i++){
        cout<<1<<" ";
    }
    for(int i=0;i<(z-1);i++) cout<<0<<" ";
    if(z!=0) cout<<0;


}
