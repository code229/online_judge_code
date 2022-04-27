#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long  a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
         if(a[1]==a[0] && a[1]!=a[2]){

            a[0]+=1;
            a[1]+=1;
        }
        if(a[0]<a[1]) a[0]+=1;
        if(a[1]==a[2] && a[0]!=a[1]){

            a[2]-=1;
            a[1]-=1;
        }
      //  sort(a,a+3);
        if(a[1]<a[2]) a[2]-=1;


        long long ans;
       // cout<<a[0]<<" "<<a[1]<<" "<<a[2];
       ans=abs(a[0]-a[1])+abs(a[0]-a[2])+abs(a[1]-a[2]);
       // cout<<a[0];
        cout<<ans<<endl;
    }
}
