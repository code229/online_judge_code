




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
int main(){
    int t,dx,dy;
    cin>>t;
    while(t--){
      set<int>r,c;
      int n,m;
      cin>>n>>m;
      int a[n][m];
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==1) r.insert(i),c.insert(j);
        }
      }
      if(min(n-r.size(),m-c.size())%2) cout<<"Ashish"<<endl;
      else cout<<"Vivek"<<endl;
    }
}
