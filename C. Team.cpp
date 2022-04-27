
#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n,m;
   cin>>n>>m;
   if(n-m>1){
    cout<<-1;
    return 0;
   }
   if(n<m){
    if((n+1)>m || ((n+1)*2)<m) cout<<"-1";
    else{
        int d=m-(n+1);
        for(int i=0;i<n;i++){
            if(d==0) cout<<"10";
            else{
                cout<<"110";
                d--;
            }
        }
        if(d==0) cout<<1;
        else cout<<11;
    }
   }
   else {
    for(int i=0;i<min(n,m);i++){
        cout<<"01";
    }
    if(n>m) cout<<0;
   }
}
