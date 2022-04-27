
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        string s1="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1') s1+='1';
            else break;
        }
     //   cout<<s1<<endl;
        s1+='0';
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') s1+='0';
            else break;
        }

        reverse(s1.begin(),s1.end());
         if(s1.size()>n){
            s1.erase(s1.begin());
        }
        cout<<s1<<endl;
    }
}
