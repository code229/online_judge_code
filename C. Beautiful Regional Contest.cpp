#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--)
   {
       int k;
       cin>>k;
       int  a[k+1];
       for(int i=1;i<=k;i++)
       {
           cin>>a[i];
       }
       int k1=a[1];
       int flag=0;
       int i=1;
       for(i=1;i>=1;i++){
        if(i>=k) break;
        else if(a[i]!=k1) break;
       }
       int j=k/2;
       j=j/3;
       j=((k/2)-j)/2;
       if(((i-1)>=j) || ((i-1)>((k/2)-2))){
        cout<<"0 0 0"<<endl;
        continue;
       }
       int k2;
       for(k2=i;k2>=1;k2++){
        if(a[i]!=a[k2]){
            break;
        }
       }
       k2=max((k2-1),(2*i-1));
       while(a[k2]==a[k2+1] && k2<k){
        k2++;
        }
       if(k2>=(k/2) || (i-1)>=((k/2)-k2)){
        cout<<"0 0 0"<<endl;
        continue;
       }
       int k3=(k/2)-k2;
       int last=k/2;
       if(a[(k/2)+1]==a[(k/2)]){
          while(a[last+1]==a[last]){
            last--;
          }
       }
       if(last<=k2 || (last-k2)<=(i-1)){
         cout<<"0 0 0"<<endl;
        continue;
       }
       cout<<i-1<<" "<<k2-(i-1)<<" "<<last-k2<<endl;
       }
}
