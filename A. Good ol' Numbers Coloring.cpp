#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd((b%a),a);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(gcd(a,b)==1) cout<<"Finite"<<endl;
        else cout<<"Infinite"<<endl;
    }
}
