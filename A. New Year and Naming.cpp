#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>v1;
    vector<string>v2;
    v1.push_back("d");
    v2.push_back("fd");
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v1.push_back(s);
    }
     for(int i=0;i<m;i++){
        string s;
        cin>>s;
        v2.push_back(s);
    }
    int q;
    cin>>q;
    while(q--){

        int nn;
        cin>>nn;
        int n1=nn%n;
        if(n1==0) n1=n;
        int n2=nn%m;
        if(n2==0) n2=m;
        cout<<v1[n1]<<v2[n2]<<endl;
    }
}
