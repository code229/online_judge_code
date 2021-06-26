




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
#define pi acos(-1)
#define set(a,b) memset(a,b,sizeof(a))
#define mod 1000003
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;

//directions

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]={1,-1,0,0}; // 4-direction...........
int dy4[]={0,0,1,-1};
//
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
int gcd (int a, int b) {
     if (b == 0)
         return a;
     else
         return gcd (b, a % b);
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
ll modinv(ll n){return big_mod(n,mod-2,mod);}
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
ll fact(ll n){
    ll f=1;
    for(ll i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
ll _pow(ll a,ll n){
    ll res=1;
    for(int i=0;i<n;i++){
        res*=a;
    }
    return res;
}
int lcm(int a,int b){
    return a/__gcd(a,b)*b;
}
//extended gcd;
int E_gcd(int a, int b, int & x, int & y) {
    if (a == 0) {
            x = 0;
            y = 1;
            return b;
    }
    int x1, y1;
    int d = E_gcd(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
     g = E_gcd(abs(a), abs(b), x0, y0);
     if (c % g) {
          return false;
     }
     x0 *= c / g;
     y0 *= c / g;
     if (a < 0) x0 = -x0;
     if (b < 0) y0 = -y0;
     return true;
}
/*void build_failure_function(string pattern,int m){
    failure[0]=0;
    failure[1]=0;

    for(int i=2;i<=m;i++){
        int j=failure[i-1];
        while(true){
            if(pattern[j]==pattern[i-1]){
                failure[i]=j+1;
                break;
            }
            if(j==0){
                failure[i]=0;
                break;
            }
            j=failure[j];
        }
    }
}
bool kmp(string text,string pattern){
    int n=text.size();
    int m=pattern.size();

    build_failure_function(pattern,m);

    int i=0;

    int j=0;
    while(true){
        if(j==n){
            return false;
        }
        if(text[j]==pattern[i]){
            i++;
            j++;
            if(i==m){
                return true;
            }
        }
        else{
            if(i==0){
                j++;
            }
            else i=failure[i];
        }
    }
    return false;
}
void zfunction(string s,int k,int n){
    int l,r;
    int len=s.size();
    l=r=0;
    for(int i=1;i<len;i++){
        if(i>r){
            l=r=i;
            while(r<len && s[r]==s[r-l])
                r++;
            z[i]=r-l;
            r--;
        }
        else{
            int i1=i-l;
            if(z[i1]<r-i+1){
                z[i]=z[i1];
            }
            else{
                l=i;
                while(r<len && s[r]==s[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
    }

  }
void permutation(int at,int n){
    if(at==n+1){
        for(int i=1;i<=n;i++)
            printf("%c",number[i]+64);
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(!used[i]){
            used[i]=1;
            number[at]=i;
            permutation(at+1,n);
            used[i]=0;
        }
    }
}

*/
vector<int>v[5005];
int main(){
   IOS
   cout<<gcd(357,234);
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   int n,k;
   scanf("%d",&n);
   n*=2;
   map<int,int>mp;
   for(int i=1;i<=n;i++){
    scanf("%d",&k);
    mp[k]++;
    v[k].pb(i);
   }
   map<int,int>::iterator it;
   for(it=mp.begin();it!=mp.end();it++){
     if(it->second%2==1){
       printf("%d",-1);
        return 0;
     }
   }

   for(it=mp.begin();it!=mp.end();it++){
     for(int i=0;i<v[it->first].size()-1;i+=2){
        printf("%d %d\n",v[it->first][i],v[it->first][i+1]);
     }
   }



}

