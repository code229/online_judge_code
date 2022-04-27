#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a;
        string b;
        cin>>a>>b;
        long long  len=b.size();
        int cnt=0;
        for(int j=0;j<b.size();j++){
            if(b[j]=='9') cnt++;
        }
        if(cnt!=len) len--;
        cout<<a*len<<endl;
    }
}
