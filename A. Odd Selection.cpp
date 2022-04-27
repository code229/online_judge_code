#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x,v;
    cin>>n>>x;
    int od=0,ev=0;
    for(int i=0;i<n;i++){
        cin>>v;
        if(v%2) od++;
        else ev++;
    }
    int flag=0;
    for(int i=1;i<=x;i+=2){
        if((x-i)<=ev && od>=i){
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"NO"<<endl;

}
}
