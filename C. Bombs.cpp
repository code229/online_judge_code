#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <cstring>
#include <string>
#include <list>

using namespace std;

#define LL long long
#define FOR(i, a, b) for(int i = a, _b = b; i <= _b; i++)
#define FO(i, a, b) for(int i = a, _b = b; i < _b; i++)
#define FORD(i, a, b) for(int i = a, _b = b; i >= _b; i--)
#define FOD(i, a, b) for(int i = a; i > b; i--)
#define FORV(i, v) for(typeof(v.begin())i = v.begin(); i != v.end(); i++)
#define pb push_back
#define mp make_pair

#define sqr(x) ((x)*(x))

const double eps = 1e-8;
const double pi = 2*acos(0.0);
const string alphabetU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string alphabetL = "abcdefghijklmnopqrstuvwxyz";
const LL infinite = 1000000000;

const LL maxn = 300010;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef unsigned int u32;

static const int m37pos[] = {
    32,  0,  1, 26,  2, 23, 27,  0,  3,
    16, 24, 30, 28, 11,  0, 13,  4,  7,
    17,  0, 25, 22, 31, 15, 29, 10, 12,
     6,  0, 21, 14,  9,  5, 20,  8, 19, 18
};

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
inline LL nextLong(){
    LL x = 0;
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
void scanl(LL &x){
    x = nextLong();
}
void scans(string &s){
    s = nextLine();
}
//************************ END I/O ************************

int n, a[maxn];
void input(){
    scan(n);
    FOR (i, 1, n) scan(a[i]);
}

LL abso(LL x){
    if (x < 0) x = -x;
    return x;
}

void process(){
    LL ans = 0;
    sort(&a[1], &a[n+1]);
    FOR (i, 1, n) ans += abso((LL)a[i]-(LL)i);
    cout<<ans;
}



struct points{
    int x,y;
    points(int x,int y)
       :x(x),y(y)
    {

    }

};
struct comp{
    bool operator()(points const&a,points const&b){
            return abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y);
    }
};
 vector<points>sn;
 vector<points>ss;
 vector<points>s;
int main(){
    /*ios::sync_with_stdio(0);cin.tie(0);
    int n;
    long long ans=0;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
       scanf("%d%d",&x,&y);
        if(x==0 || y==0){
            ans+=4;
        }
        else ans+=6;
        s.push_back(points(x,y));

    }

    sort(s.begin(),s.end(),comp());
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        if(s[i].x>0){
                printf("%d %d R\n",1,abs(s[i].x));

        }
        else if(s[i].x<0){
            printf("%d %d L\n",1,abs(s[i].x));

        }
         if(s[i].y>0){
            printf("%d %d U\n",1,abs(s[i].y));

        }
        else if(s[i].y<0){
            printf("%d %d D\n",1,abs(s[i].y));

        }
        cout<<2<<endl;
        if(s[i].x>0){
           printf("%d %d L\n",1,abs(s[i].x));
        }
        else if(s[i].x<0){
            printf("%d %d R\n",1,abs(s[i].x));
        }
         if(s[i].y>0){
          printf("%d %d D\n",1,abs(s[i].y));
        }
        else if(s[i].y<0){
              printf("%d %d U\n",1,abs(s[i].y));
        }
        cout<<3<<endl;

    }*/
    map<int,int>mp;
    mp.insert({2,3});
    mp.insert({3,3});
    mp.insert({24,3});
    mp.erase(2);
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(24);

    for(int t=0;t<v.size();t++){
        cout<<v[t]<<endl;
        if(v[t]==2){
            mp.erase(t);

        }
    }
}
