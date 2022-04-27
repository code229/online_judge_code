#include<bits/stdc++.h>
using namespace std;
string s;
int dp[14][10004][12];
int c[10000];
int ans(int last,int dif,int l,int c[],int pos ){
    if(dp[dif][l][last]!=0) return 1;
    else if(l==0){
        cout<<"YES"<<endl;
        for(int i=0;i<pos;i++) cout<<c[i]<<" ";
        exit(0);
    }
    else{
        dp[dif][l][last]=1;
        for(int i=0;i<=10;i++){
            if(s[i]=='1' and i+1!=last and i+1>dif){
            c[pos]=i+1;
            ans(i+1,i+1-dif,l-1,c,pos+1);
            }
        }
    }
    return 0;
}
int main(){
    cin>>s;
    int m;
    cin>>m;
    ans(0,0,m,c,0);
    cout<<"NO"<<endl;
}
