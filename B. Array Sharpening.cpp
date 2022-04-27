#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int suf=-1,pre=n;
        for(int i=1;i<=n;i++){
            if(a[i]>=i-1){
                suf=i;
            }
            else break;
        }
        for(int i=n;i>=1;i--){
            if(a[i]>=(n-i)){
                pre=i;
            }
            else break;
        }
       // cout<<suf<<" "<<pre<<endl;
        if(pre<=suf) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
