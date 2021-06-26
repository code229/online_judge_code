#include<bits/stdc++.h>
using namespace std;
   long long dp[5001][5001];
int main(){
   int  n,m,k;
   cin>>n>>m>>k;
   long long sum[n+1];
  memset(sum,0,sizeof(sum));
  int in;
   for(int i=1;i<=n;i++){
      cin>>in;
      sum[i]+=sum[i-1]+in;
   }

   for(int i=0;i<=n;i++) dp[0][i]=0;
   for(int i=0;i<=k;i++) dp[i][0]=0;
   for(int i=1;i<=k;i++){
    for(int j=i*m;j<=n;j++){

       dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+sum[j]-sum[j-m]);
    }
   }
   cout<<dp[k][n];

}
