
//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
# include <iostream>
# include <stdio.h>
using namespace std;
int  a[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        int t,l,r,x,k;
        scanf("%d",&t);
        if(t==1){
            scanf("%d%d",&l,&r);
            long long sum=0;
            for(int i=l-1;i<r;i++) sum+=a[i];
            printf("%lld\n",sum);
        }
        else if(t==2){
            scanf("%d%d%d",&l,&r,&x);
            for(int i=l-1;i<r;i++) a[i]%=x;
        }
        else{
            scanf("%d%d",&k,&x);
            a[k-1]=x;
        }
    }

}
