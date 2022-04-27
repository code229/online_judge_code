#include<bits/stdc++.h>
using namespace std;

int main()
{

   unordered_map<string,int>mp;
   int n;
   cin>>n;
   string s;
   while(n--)
   {
       cin>>s;
       int k=(s.size())-1;
       if(mp[s]==0){
       cout<<"OK"<<endl;
        mp[s]=1;
       }
       else{
        int k1=mp[s];
        cout<<s<<mp[s]<<endl;
        mp[s]++;
       }
   }


}
