#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     int a[n],b[n];
     int cnt[3];
    // memset(cnt,0,sizeof(cnt));
    cnt[0]=cnt[1]=cnt[2]=0;
     for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]+1]++;
     }
     int flag=0;
     for(int i=0;i<n;i++){
        cin>>b[i];

     }
    // cout<<cnt[0]<<" "<<cnt[2];
     for(int i=n-1;i>=1;i--){
        cnt[a[i]+1]--;
        if(b[i]!=a[i]){
            if(b[i]>a[i]){
                if(cnt[2]==0) {
                flag=1;
                break;
                }

            }
            else{
                if(cnt[0]==0) {
                        flag=1;
                        break;
                }
            }
        }

     }
     if(flag || a[0]!=b[0]) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
   }
}
