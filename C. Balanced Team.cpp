#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    j=0;
    int mn=a[0],ans=1;
    for(int i=1;i<n;i++){
        if(a[i]-mn>5){
            ans=max(ans,i-j);
            while(a[i]-a[j]>5) j++;
            mn=a[j];

        }
        else if(i==n-1){
            ans=max(ans,i-j+1);
        }
    }
    cout<<ans;
}
