
#include<bits/stdc++.h>
using namespace std;
int pos[10000]={0};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++) cin>>a[i];
        int cnt=0;
        for(int i=0;i<2*n;i++){
            if(cnt==n-1) break;
            if(!pos[i]){
                for(int j=0;j<2*n;j++){
                    if(!pos[j] and a[i]%2==a[j]%2 and i!=j){
                        cout<<i+1<<" "<<j+1<<endl;
                        cnt++;
                        pos[i]=1;
                        pos[j]=1;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<10002;i++) pos[i]=0;
    }
}

