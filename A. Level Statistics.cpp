
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int n,ap,bp;
    while(t--){
        cin>>n;
        int flag=0;

        int a[n],b[n];
        a[0]=0,b[0]=0;
        for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
        for(int i=1;i<=n;i++){

            if(a[i-1]>a[i] || b[i-1]>b[i] || ((b[i]-b[i-1]) > (a[i]-a[i-1]))){
                flag=1;
            }

        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
