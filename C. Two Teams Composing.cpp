#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        memset(a,0,sizeof(a));
        set<int>s;
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>k;
            s.insert(k);
            a[k]++;
            mx=max(mx,a[k]);
        }

       if(s.size()>mx) cout<<mx<<endl;
       else if(s.size()<mx) cout<<s.size()<<endl;
       else cout<<mx-1<<endl;

    }
}
