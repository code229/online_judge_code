#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--){
    vector<int>v;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1') v.push_back(i);
    }
    if(v.size()==0){
        cout<<0<<endl;
        continue;
    }
    int ct=0;
    for(int i=0;i<v.size()-1;i++){
        ct+=(v[i+1]-v[i]-1);
    }
    cout<<ct<<endl;
    }
}
