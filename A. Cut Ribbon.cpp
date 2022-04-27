#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
  /*  for(int i=0;i*a<=n;i++){
        for(int j=0;j*b+i*a<=n;j++){
            int remin=(n-i*a-j*b)/c;
                if((i*a+j*b+remin*c)==n){
                       // cout<<i<<" "<<j<<" "<<k<<endl;
                   ans=max(ans,(i+j+remin));
                }
            }
        }

*/
 int dp[4010];
 memset(dp,-1,sizeof(dp));
 dp[0]=0;
 for(int i=1;i<=n;i++){
     if( i - a >= 0 && dp[i - a] != -1 )
             dp[i] = max( dp[i], dp[i-a] + 1);
         if( i - b >= 0 && dp[i - b] != -1 )
             dp[i] = max( dp[i], dp[i-b] + 1);
         if( i - c >= 0 && dp[i - c] != -1 )
             dp[i] = max( dp[i], dp[i-c] + 1);
 }
    cout<<dp[n]<<endl;
}
