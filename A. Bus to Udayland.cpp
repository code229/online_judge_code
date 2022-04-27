#include<bits/stdc++.h>
using namespace std;

int main()

{

   int n;
    cin>>n;
    string s[n];
   // string s;
    for(int i=0;i<n;i++){
        cin>>s[i];
        //v.push_back(s);
    }
    int flag=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<5;j++){
            if(s[i][j]=='O'){
                if(s[i][j+1]=='O'){
                    s[i][j]='+';
                    s[i][j+1]='+';
                    flag=1;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) break;
    }
    if(flag==0){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
         cout<<s[i]<<endl;
    }
}
