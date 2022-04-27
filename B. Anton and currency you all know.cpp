#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0,flag1=0;
    map<int,int>mp;
    int ln=s.size();
    int last=s[ln-1]-'0';
    for(int i=0;i<(s.size()-1);i++){
        int ss=s[i]-'0';
        if(ss%2==0 && ss<last){
           char tmp=s[ln-1];
           s[ln-1]=s[i];
           s[i]=tmp;
           flag=1;
           break;

        }
    }
    if(flag==0){
        for(int i=ln-2;i>=0;i--){
        int ss=s[i]-'0';
        if(ss%2==0 && ss>last){
           char tmp=s[ln-1];
           s[ln-1]=s[i];
           s[i]=tmp;
           flag1=1;
           break;

        }
    }
    }
    if(flag==0 && flag1==0) cout<<-1;
    else cout<<s;


}
