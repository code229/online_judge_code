

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int a[1000008];
int main()
{
    int n;
    cin>>n;
  a[0]=a[1]=a[2]=a[3]=-1;
  a[4]=a[7]=0;
  for(int i=5;i<=n;i++){
    if(i!=4 and i!=7){
        if(a[i-7]!=-1 and i>7) a[i]=i-7;
        else if(a[i-4]!=-1) a[i]=i-4;
        else a[i]=-1;
    }
  }
  //for(int i=0;i<=12;i++) cout<<a[i]<<" ";
  string s="";
  if(a[n]==-1){
    cout<<a[n];
    return 0;
  }
  else{
    while(1){
        if(a[n]==0){
            s+=(n+48);
            break;
        }
        else{
            s+=((n-a[n])+48);
            n=a[n];
        }
    }
    reverse(s.begin(),s.end());
    cout<<s;
  }
}
