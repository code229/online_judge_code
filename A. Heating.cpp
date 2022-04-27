#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int ci,sumi;
        long long sumii=0;
        cin>>ci>>sumi;
        if(sumi<=ci){
            cout<<sumi<<endl;
            continue;
        }
        while(1){
            if((sumi%ci)==0){
                int k=sumi/ci;
                sumii+=((k*k)*ci);
                break;
            }
            else{
                int k=ceil(sumi/ci);
                sumi-=k;
                ci-=1;
                sumii+=(k*k);
            }
        }
        cout<<sumii<<endl;
    }
}
