
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int val=n/2;
        for(int i=0;i<(val-1);i++) cout<<"1";
        if((2+(n%2))==3) cout<<7;
        else cout<<1;
        cout<<endl;
    }
}
