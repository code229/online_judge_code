#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long nn,k;
        cin>>nn>>k;
        if((nn-k)%2 || nn<k*k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
