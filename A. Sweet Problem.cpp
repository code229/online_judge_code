#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        long long ans=0;
        int t=a[2]-a[1];
        int t1=min(t,a[0]);
        ans+=t1;
        a[2]-=t1;
        a[0]-=t1;
        int tt=a[0]/2;
        a[1]-=tt;
        int tt1=a[0]-tt;
        a[2]-=tt1;
        ans+=(tt+tt1);
        ans+=min(a[1],a[2]);
        cout<<ans<<endl;

    }
}
