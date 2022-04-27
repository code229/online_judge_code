


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
#define vii vector<pii>
#define mii map<int,int>
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
    string s;
    cin>>s;
    /*vii m;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' && s[i+1]=='B') m.push_back(make_pair(i,i+1));
        else if(s[i]=='B' && s[i+1]=='A') m.push_back(make_pair(i,i+1));
    }
    if(m.empty()){
        cout<<"NO";
        return 0;
    }
    // sort(m.begin(),m.end());
    int flag=0;
    for(int i=0;i<m.size()-1;i++){
      if(m[i].second!=m[i+1].first && s[m[i].second]==s[m[i+1].first]){
        flag=1;
        break;
      }
    }
    for(int i=0;i<m.size()-1;i++){
        for(int j=i+1;j<m.size();j++){
            if(m[i].second!=m[j].first && s[m[i].second]==s[m[j].first]){
            flag=1;
            break;
            }
        }
        if(flag) break;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";*/
        if(s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1 || s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1)
            cout<<"YES";
        else cout<<"NO";


}
