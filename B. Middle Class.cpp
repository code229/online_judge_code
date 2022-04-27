

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n,v;
    long long x;
    cin>>t;

    while(t--){
        cin>>n>>x;
        vector<int>as;
        for(int i=0;i<n;i++) cin>>v,as.push_back(v);
        sort(as.begin(),as.end());
        reverse(as.begin(),as.end());
        long long pro=0;
        int cnt=0;
        for(long long i=0;i<as.size();i++){
            pro+=as[i];
            if(pro>=((i+1)*x)) cnt++;
        }

        cout<<cnt<<endl;
    }
}
