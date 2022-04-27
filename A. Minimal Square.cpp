
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long ab=max(min(a,b)*2,max(a,b));
        cout<<ab*ab<<endl;
    }
}
