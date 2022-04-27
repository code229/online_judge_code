

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,aa,b;
    cin>>t;
    pair<int,int> a[t];
    for(int i=0;i<t;i++){
        cin>>aa>>b;
        a[i]={aa,b};
    }
    sort(a,a+t);
    int ans = -1;
    for(int i=0;i<t;i++) cout<<a[i].first<<" "<<a[i].second<<endl;
    for(int i = 0; i < t; i++)
    {
        if (ans <= a[i].second)
        {
            ans = a[i].second;
        }
        else
        {
            ans = a[i].first;
        }
    }
    cout<<ans<<endl;
}
