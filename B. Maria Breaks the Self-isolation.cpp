#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int ans=n+1,ii=-1;
        int i=0;
        while(i<n){
                int l=-1;
            for(int j=n-1;j>=i;j--){
                int re=i;
                re+=(j-i+1);
                if(re>=a[j]){
                    l=j;
                    break;
                }
            }
            if(l==-1) break;
            else if(l==(n-1)){
                ii=l;
                break;
            }
            i=l+1;
            ii=l;
        }

        cout<<ii+2<<endl;
    }
}
