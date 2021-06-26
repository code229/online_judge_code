
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        if((r%2+g%2+b%2+w%2)<2){
            cout<<"Yes\n";
            continue;
        }
        int f=0;
        for(int i=1;i<100000;i++){
            if(r!=0 and g!=0 and b!=0){
                w+=3;
                r-=1;
                b-=1;
                g-=1;
            }
            else break;
            if((r%2+g%2+b%2+w%2)<2){
                f=1;
                break;
            }
        }
        if(f==0) cout<<"No\n";
        else cout<<"Yes\n";
    }
}
