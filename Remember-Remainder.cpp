#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long sum=0;
    for(int i=0;i<n;i++){
        int kk;
        cin>>kk;
        sum+=(kk%k);
    }
    cout<<sum;
}
