#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   int d=0;
   for(int i=0;i<n;i++){
    if((a[i]+1)*d<=i) d++;
   }
   cout<<d;

}
// int n,ans=0,cnt=0;
//    scanf("%d",&n);
//    int ara[n];
//    for(int i=0;i<n;i++) scanf("%d",&ara[i]);
//    sort(ara,ara+n);
//
//    for(int i=0;i<n;i++){
//        if((ara[i]+1)*ans<=i) ans++;
//    }
//    printf("%d",ans);
