#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int x,n,m;
        cin>>x>>n>>m;

        for(int i=0;i<n;i++){
            if(x<=20) break;
            x=(x/2)+10;
        }
        if(x<=(m*10)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
