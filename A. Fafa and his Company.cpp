
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=(n/2);i++){
        int temp=n-i;
        if(temp%i==0) cnt++;
    }
    cout<<cnt;
}