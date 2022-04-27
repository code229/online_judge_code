
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,c,d,e,f,ans=0;
  cin>>a>>b>>c>>d>>e>>f;
  for(long long i=0;i<=min(a,d);i++){
      ans=max(ans,i*e+min(d-i,min(b,c))*f);
  }
  cout<<ans<<endl;
}
