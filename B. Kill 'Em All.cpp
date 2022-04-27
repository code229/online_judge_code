
#include<bits/stdc++.h>
using namespace std;



int main(){
   // IOS
    //freopen("output.txt","w",stdout);
    int q;
    cin>>q;
    while(q--)
    {
    //  int a[100001];
      int n,r,xi;
      cin>>n>>r;

      set<int>s;
      for(int i=0;i<n;i++){
        cin>>xi;
        s.insert(xi);


      }
      //cout<<mx;
      vector<int>v;
      set <int> :: iterator itr;
      for(itr=s.begin();itr!=s.end();++itr){

            v.push_back(*itr);

      }
      int cnt=0;
      for(int i=(v.size()-1);i>=0;i--)
      {
          if((v[i]-(r*cnt))>=1){
            cnt++;

          }
          else break;
      }
      cout<<cnt<<endl;

    }



}
