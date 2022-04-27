


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  cout<<min(m+1,n+1)<<endl;
  for(int i=min(n,m),j=0;i>=0 && j<=m;i--,j++){
    cout<<i<<" "<<j<<endl;
  }
}
