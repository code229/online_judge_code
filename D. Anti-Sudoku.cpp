#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s[9];
        for(int i=0;i<9;i++){
            cin>>s[i];
            for(int j=0;j<9;j++){
                if(s[i][j]=='7') s[i][j]='2';
            }
        }
        for(int i=0;i<9;i++){
            cout<<s[i]<<endl;
        }
    }
}
