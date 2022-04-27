
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,m,k;
  cin>>t;
  while(t--){
  cin>>n>>m>>k;

  if((n/k)>=m){
    cout<<m<<endl;
  }
  else{
        int nn=(m-(n/k))/(k-1);
        if((m-(n/k))%(k-1)) nn++;
        cout<<(n/k)-nn<<endl;

  }
  }


}
