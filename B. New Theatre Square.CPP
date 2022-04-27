
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,m,x,y;
  cin>>t;
  while(t--){
    cin>>n>>m>>x>>y;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j]=='.' && a[i][j+1]=='.' && j<(m-1)){
            ans+=min(2*x,y);
            j++;
           }
           else if(a[i][j]=='.'){
            ans+=x;
           }
        }

    }
    cout<<ans<<endl;

  }


}

