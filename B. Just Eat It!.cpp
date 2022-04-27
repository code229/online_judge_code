#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
            int n;
        cin >> n;
    a.resize(n);
    int flag=0;
    for(auto &i : a) cin >> i;
    ll sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if(sum <= 0) flag=1;
    }
    sum = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        sum += a[i];
        if(sum <= 0) flag=1;;
    }

       if(flag==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
}
