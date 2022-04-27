#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     stack<char>st;
     for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')' and(st.empty() or st.top()!='(')){
            st.push(s[i]);
        }
        else if(s[i]==')' and st.top()=='(' ){
            st.pop();
        }

     }
     cout<<st.size()/2;
    }
}
