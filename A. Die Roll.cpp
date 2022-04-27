
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    int numerator=(6-max(y,w))+1,gcd=__gcd(numerator,6);
    cout<<numerator/gcd<<"/"<<6/gcd;
}
