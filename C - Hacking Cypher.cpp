
#include<bits/stdc++.h>
using namespace std;
int calc[1000010],calb[1000010];
int main()
{
    string s,s1="";
    cin>>s;
    int a,b;
    cin>>a>>b;
    int ln=s.size();
    int ps=0;
    for(int i=0;i<ln;i++){
        ps=(ps*10+(s[i]-'0'))%a;
        calc[i]=ps;
    }
    int p=1;
    for(int i=ln-1;i>=1;i--){
        calb[i]=((s[i]-'0')*p+calb[i])%b;
        p=p*10%b;
        if(calb[i]==0 and calc[i]==0 and s[i]!='0'){
            cout<<"YES\n";
            cout<<s.substr(0,i)<<"\n"<<s.substr(i,ln)<<"\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
