
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long a,b,n,m;
    cin>>t;
    while(t--){
        cin>>a>>b>>n>>m;
        if(m<=min(a,b) and (m+n)<=(a+b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
