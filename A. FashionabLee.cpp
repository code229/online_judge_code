#include<bits/stdc++.h>
using namespace std;

int main()
{

   vector<char>v{'0','1'};
   v.erase(v.begin()+0,v.begin()+2);
   for(int i=0;i<v.size();i++) cout<<v[i];
   cout<<"S";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
