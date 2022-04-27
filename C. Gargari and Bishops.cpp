#include<bits/stdc++.h>
using namespace std;

#define mx 2020
long long diag1[2*mx],diag2[2*mx],bisop[2];
pair<int,int>ans[2];
int ar[mx][mx];

int main()
{
    cin.sync_with_stdio(false);
    int n;
    cin>>n;
    bisop[0]=bisop[1]=-1;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>ar[i][j];
        diag1[i+j]+=ar[i][j];
        diag2[i-j+n]+=ar[i][j];
    }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            long long vL=diag1[i+j]+diag2[i-j+n]-ar[i][j];
            int mod=((i+j)&1);
            if(vL>bisop[mod]){
                bisop[mod]=vL;
                ans[mod].first=i;
                ans[mod].second=j;
            }
        }
    }
    cout<<bisop[0]+bisop[1]<<"\n";
    if(ans[0]>ans[1]){
        swap(ans[0],ans[1]);
    }
    cout<<ans[0].first<<" "<<ans[0].second<<" ";
    cout<<ans[1].first<<" "<<ans[1].second;
}
