#include<bits/stdc++.h>
using namespace std;
bool isZero(char ch){
    return ch=='0';
}
int main()
{
    cout<<((2+2)&1);
    string s,s1="";
    cin>>s;
    int i=0;
    while(i<s.size()){
        int j=i;
        int cnt=0;
        while(j<s.size() && s[i]==s[j]){
            cnt++;
            if(cnt>2)
                   s[j]='0';
            j+=1;
            if(j==s.size()) break;

        }
        i=j;
        if(j==s.size()-1) break;
    }
//cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0') s1+=s[i];
    }
    if(s1.size()<4){
       for(int i=0;i<s1.size();i++){
        if(s1[i]!='0') cout<<s1[i];
    }
    return 0;
    }
    // cout<<s1.size()<<endl;
    for(int i=0;i<(s1.size()-3);i++){

         if (s1[i] == s1[i + 1] and s1[i + 2] == s1[i + 3]) {
            s1[i+2]='0';
         }
    }
    // cout<<s<<s1<<endl;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!='0') cout<<s1[i];
    }
}
