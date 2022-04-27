#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,aa[3];
        cin>>aa[0]>>aa[1]>>aa[2];
        sort(aa,aa+3);
        a=aa[0];
        b=aa[1];
        c=aa[2];
        int ans=0;
        if(a!=0) ans+=1,a-=1;
        if(b!=0) ans+=1,b-=1;
        if(c!=0) ans+=1,c-=1;
        if(a>0 and c>0) ans+=1,a-=1,c-=1;
        if(b>0 and c>0) ans+=1,b-=1,c-=1;
        if(a>0 and b>0) ans+=1,a-=1,b-=1;
        if(a>0 and b>0 and c>0) ans+=1;

        cout<<ans<<endl;
    }
}
