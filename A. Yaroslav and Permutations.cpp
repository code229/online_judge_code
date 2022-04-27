

#include<bits/stdc++.h>
using namespace std;
int cnt[1001]={0};
int main()
{
   int n;
   cin>>n;
   int k;
   for(int i=0;i<n;i++) cin>>k,cnt[k]++;
   int x=0;
   for(int i=0;i<1001;i++) x=max(x,cnt[i]);
   if((x-1)<=(n-x)) cout<<"YES";
   else cout<<"NO";

}
