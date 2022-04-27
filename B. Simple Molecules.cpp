#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   if((a+b+c)%2!=0){
      cout<<"Impossible";
      return 0;
   }
   int i1,i2,i3;
   i1=(b+a-c)/2;
   i2=(b+c-a)/2;
   i3=(c+a-b)/2;
   int mx=max(a,max(b,c));
   if(mx>((a+b+c)-mx)) cout<<"Impossible";
    else cout<<(b+a-c)/2<<" "<<(b+c-a)/2<<" "<<(c+a-b)/2;


}
