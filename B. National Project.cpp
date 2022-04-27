#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
     long long n,g,b;
     cin>>n>>g>>b;
     long long nw=(n/2)+(n%2);
     long long ans=nw/g;
     if(ans==0){
        cout<<n<<endl;
        continue;
     }
     if(ans*g==nw){
        ans=(ans)*g+(ans-1)*b;
     }
     else{
        ans=(ans)*g+ans*b;
        ans+=nw%g;
     }
     if(ans<n){
        ans=n;
     }
     cout<<ans<<endl;
    }
}
