//بسم الله الرحمن الرحيم
 
                                                 //بسم الله الرحمن الرحيم
                                                      //الله أكبر
 
                                              //█▀█─█──█──█▀█─█─█
                                              //█▄█─█──█──█▄█─█▄█
                                              //█─█─█▄─█▄─█─█─█─█
 
#pragma warning(disable:4786)
#pragma warning(disable:4996)
#include<bits/stdc++.h>
#define for1n(i, a, b) for (int i=a; i<(b); i++)
#define forn(i, a) for (int i=0; i<(a); i++)
#define w(x) scanf("%d",&x);while(x--)
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
#define br '\n'
#define ff " "
#define F first
#define S second
 
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1LL;for(; e > 0LL; e >>= 1LL){if(e & 1LL) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
using namespace std;
 
//directions
int a[200005],t;
string s;
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
/*ll factt[1000007];
ll inv[10000007];
 
void pre()
{
    inv[0]=factt[0]=1;
    for1n(i,1,1000006){
        factt[i]=(factt[i-1]*i)%mod;
        inv[i]=(inv[i-1]*modinv(i))%mod;
    }
}
 */
 //  fact(s+x-1) / (    fact(x-1) * fact(s)  )
           // nCr ; n = s+x-1 ,, r = s

 //************************128_bit_int*******************
/*
__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}
bool cmp(__int128 x, __int128 y) { return x > y; }
*/
//************************128_bit_int*******************
 
//************************ I/O ****************************
inline int nextInt(){
    int x = 0;
    register int c = getc(stdin);
    int sign = 0;
    for( ; ((c < 48 || c > 57) && c != '-'); c = getc(stdin));
    if(c == '-'){
        sign = 1;
        c = getc(stdin);
    }
    for( ; c > 47 && c < 58; c = getc(stdin)) x = (x<<1) + (x<<3) + c - 48;
    if (sign) x = -x;
    return x;
}
inline ll nextLong(){
    ll x = 0;
    register int c = getc(stdin);
    int sign = 0;
    for( ; ((c < 48 || c > 57) && c != '-'); c = getc(stdin));
    if(c == '-'){
        sign = 1;
        c = getc(stdin);
    }
    for( ; c > 47 && c < 58; c = getc(stdin)) x = (x<<1) + (x<<3) + c - 48;
    if (sign) x = -x;
    return x;
}
inline string nextLine(){
    string s;
    while(!feof(stdin)){
        char c = fgetc(stdin);
        if(c == 13) continue;
        if(c == 10) return s;
        s += c;
    }
    return s;
}
void scan(int &x){
    x = nextInt();
}
void scanl(ll &x){
    x = nextLong();
}
void scans(string &s){
    s = nextLine();
}
//************************ END I/O ************************
 int n;
 
void input(){
    scan(n);
    for(int i=1;i<=n;i++) scan(a[i]);
}
 
ll abso(ll x){
    if (x < 0) x = -x;
    return x;
}
void process(){
 
}
int cnt[200005]={0};
int main(){
    //IOS;
   // #ifndef ONLINE_JUDGE
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);
   // #endif
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);
 
    w(t){
       cin>>n;
       for(int i=1;i<=n;i++) a[i]=i;
       for(int i=1;i<n;i+=2) swap(a[i],a[i+1]);
       if(n%2) swap(a[n-1],a[n]);
       for(int i=1;i<=n;i++) cout<<a[i]<<ff;
       cout<<endl;
    }
 
    return 0;
}