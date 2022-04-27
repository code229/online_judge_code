#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        int flag=0;

        for(int i=0;i<l-1;i++){
            if(s[i]==s[i+1] && (s[i]!='?' && s[i+1]!='?')){
                flag=1;
                break;
            }
        }
         if(l==1){
           cout<<'a'<<endl;
           continue;
        }
       else if(flag==1) {
                cout<<"-1"<<endl;
                continue;
        }
        for(int i=0;i<l;i++){
            if(i==0 && s[i]=='?'){
                if(s[i+1]!='?'){
                    if(s[i+1]=='c') s[i]='a';
                    else s[i]=(s[i+1]+1);
                }
                else s[i]='a';
            }
            else if(i==l-1 && s[i]=='?'){
                 if(s[i-1]=='c') s[i]='a';
                 else s[i]=(s[i-1]+1);
            }
            else{
                    if(s[i]=='?'){
                       if(s[i+1]=='?') {
                        if(s[i-1]=='c') s[i]='a';
                        else s[i]=(s[i-1]+1);
                       }
                       else{
                         if(s[i-1]==s[i+1]){
                             if(s[i-1]=='c') s[i]='a';
                             else s[i]=(s[i-1]+1);
                         }
                         else{
                            s[i]=294-(s[i-1]+s[i+1]);
                         }
                       }
                    }
            }
        }
        cout<<s<<endl;

    }

}
