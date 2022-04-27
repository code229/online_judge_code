
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long dp[10000001];
void solve()
{

	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= 10000000; ++i)
		dp[i] = ((i - 1) * (dp[i - 1] +dp[i - 2]))%mod;
}

int main()
{
    solve();
	int t,k;
	cin>>t;
	while(t--){
        cin>>k;
        cout<<dp[k]<<endl;
	}
}
