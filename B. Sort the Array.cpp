

                                                 //بسم الله الرحمن الرحيم
                                                      //الله أكبر

                                              //█▀█─█──█──█▀█─█─█
                                              //█▄█─█──█──█▄█─█▄█
                                              //█─█─█▄─█▄─█─█─█─█

#pragma warning(disable:4786)
#pragma warning(disable:4996)
#include<bits/stdc++.h>
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define pii pair<int,int>
#define pll pair<long long ,long long>
#define pli pair<long long , int>
#define pil pair<int ,long long>
#define pi acos(-1)
#define pb push_back
#define mkp make_pair
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MAX 300005
#define INF 0x3f3f3f3f
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;

ll big_mod(ll a,ll b,ll m){
    a%=m;
    ll res=1;
    while(b>0){
        if(b&1)
            res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;

}
ll binpow(ll a,long long b){
    if(b==0)
        return 1;
    long long res=binpow(a,b/2);
    if(b%2==1)
        return res*res*a;
    else
        return res*res;
}
ll binpow_iterative(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
            if (b & 1)
                res = res * a;
             a = a * a;
             b >>= 1;
         }
    return res;
}
int main(){
    IOS
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+(n+1));
    int st=0,ed=0;
    int flag=0;
    for(int i=1;i<n;i++){
        if(a[i]!=b[i] && a[i]<a[i+1]){

                if(st!=0 && ed==0) ed=i;
                else {
                        flag=1;
                        break;
                }

        }
        else if(a[i]!=b[i] && a[i]>a[i+1] && st==0){
            st=i;
        }
        else if(a[i]!=b[i] && a[i]<a[i+1] && st!=0){
            ed=i;
        }

    }
   // for(int i=1;i<=n;i++) cout<<b[i]<<" ";
    if(st!=0 && ed==0) ed=n;
    else if(ed!=0 && a[n]!=b[n]) flag=1;
    //cout<<st<<" "<<ed<<" "<<flag;
    int nst=st;
    int ned=ed;
    if(flag==0 && st!=0 &&ed!=0){
    while(st<=ed){
        if(a[ed]!=b[st] || a[st]!=b[ed]){
            flag=1;
            break;
        }
        st++;
        ed--;
    }
    }
   if(flag!=1){
      cout<<"yes"<<endl;
      if(nst==0 && ned==0) cout<<"1 1"<<endl;
      else cout<<nst<<" "<<ned;
   }
   else{
    cout<<"no";
   }

}
