#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int cnta=0;
    int cntb=0;
    int d=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]==1 && b[i]==1) cnta++;
        if(b[i]==1 && a[i]!=1) cntb++;
        if(a[i]==1 && b[i]!=1) d++;
    }

    if(d==0) {cout<<-1;return 0;}
    int dd=(cntb+1)/d;
     if(dd*d<(cntb+1)) dd++;
    cout<<dd;
}
