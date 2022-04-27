#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long  n,d;
        cin>>n>>d;
        if(d<=n){
            cout<<"YES"<<endl;
            continue;
        }
        int flag=0;
        for(int j=1;j*j<=d;j++){

            long long cnt=(d/(j+1));
            if((j+1)*cnt<d) cnt+=1;
            cnt+=j;
          //  cout<<cnt<<endl;
            if(cnt<=n){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
