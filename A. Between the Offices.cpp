
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int sf=0,fs=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='F' && s[i+1]=='S') fs++;
        else if(s[i]=='S' && s[i+1]=='F') sf++;
    }
    if(sf>fs) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
