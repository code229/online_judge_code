#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string a="";
        string b="";
        int s1=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' && s1==s.size()){
                a+='1';
                b+='0';
                s1=i;
            }
            else if(i<s1){
                if(s[i]=='2'){
                    a+='1';
                    b+='1';
                }
                else{
                    a+='0';
                    b+='0';
                }
            }
            else if(i>s1){
                a+='0';
                b+=s[i];
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
}
