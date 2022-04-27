#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3) cout<<1<<endl;
        else cout<<(n/2)+(n%2)<<endl;
    }
}
