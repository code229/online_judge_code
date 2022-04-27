
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   while(n--){
    int t,k;
    cin>>t>>k;
    int a[t];
    int cnt=0;
    long long sum=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%k) cnt++;

    }
    if(cnt==0){
        cout<<-1<<endl;
        continue;
    }
    else if(sum%k){
        cout<<t<<endl;
        continue;
    }
    int j;
    long long sum1=sum;
    for(int i=0;i<t;i++){
        sum1-=a[i];
        if(sum1%k){
            j=t-i-1;
            break;
        }
    }
    cout<<j;
    int j2;
    for(int i=t-1;i>=0;i--){
        sum-=a[i];
        if(sum%k){
            j2=i;
            break;
        }
    }
    cout<<max(j,j2)<<endl;
   }

}
