#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    if(k==0){
        cout<<0;
        return 0;
    }
    sort(a,a+12,greater<int>());
    int sum=0,flag=0,month;
    for(int i=0;i<12;i++){
        sum+=a[i];
        if(sum>=k){
           flag=1;
           month=i;
           break;
        }
    }
    if(flag==1) cout<<month+1;
    else cout<<"-1";
}
