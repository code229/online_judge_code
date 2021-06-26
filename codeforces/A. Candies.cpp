#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long sum=1,n,val=2,ans;
        cin>>n;

        while(1){
            sum+=val;
            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
            val*=2;

        }
    }
}
