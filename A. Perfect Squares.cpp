
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=INT_MIN,k,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        int l=sqrt(k);
        if(k<0){
            ans=max(ans,k);
        }
        else if(l*l!=k){
            ans=max(k,ans);
        }
    }
    cout<<ans;
}
