
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sz=n+1;
        int a[sz],ans[sz];
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+sz);
        int st=1+((n+1)/2-1)*2,fl=0;
        for(int i=1;i<=n;i++){

            if(st==1){
                ans[st]=a[i];
                i++;
                st++;
                ans[st]=a[i];
                st+=2;
                fl=1;
            }
            else if(fl==0){
                    ans[st]=a[i];
                    st-=2;
            }
            else{
                ans[st]=a[i];
                st+=2;
            }
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
