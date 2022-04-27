#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            s[i]=s[i+1]='0';
        }
    }
    set<char> st;
     for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            st.insert(s[i]);
        }
    }
    set<char> ::iterator it;
    for(it=st.begin();it!=st.end();it++){
        cout<<*it;
    }
    cout<<endl;

}
}
