#include<bits/stdc++.h>
using namespace std;
int is_prime(int n){
    int a[]={2,3,5,7};
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(is_prime(n)==0){
            cout<<"NO"<<endl;
            continue;
        }
        int a=0,b=0,c=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a=i;
                n/=i;
                break;
            }
        }
       // cout<<n;
        for(int i=2;i*i<=n;i++){
            int chk=n/i;
            if(n%i==0 && i!=a && chk!=i && chk!=a){
                b=n/i;
                c=i;
                break;
            }
        }
        if(a!=0 && b!=0 && c!=0){
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;

        }

        else cout<<"NO"<<endl;

    }
}
