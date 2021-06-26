#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long aa,bb;
        cin>>aa>>bb;
        long long ans=0;
        int a=min(aa,bb);
        int b=max(aa,bb);
        long long ab=b-a;
        ans+=ab/5;
        ab=(ab%5);
        ans+=ab/2;
        ab=(ab%2);
        ans+=ab;
        cout<<ans<<endl;

    }
}

