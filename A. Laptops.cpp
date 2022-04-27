#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
 map<int, int> mp;
int main()
{
     int n;
    cin>>n;
    int a,b;
    //vector<pair<int,int> >v;
   /* for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

     for(int i=0;i<v.size();i++){
       mp.insert({v[i].second,i+1});
    }
    int flag=0;

    for(int i=0;i<v.size();i++){
       /* for(int j=i+1;j<v.size();j++){
            if(v[i].second>v[j].second){
                cout<<"Happy Alex";
                return 0;
            }
        }*/
        /*map<int,int>::iterator it=mp.begin();
        if(v[i].second>it->first){
            cout<<"Happy Alex";
                return 0;
        }
        mp.erase(v[i].second);

    }
    cout<<"Poor Alex";*/
 int flag=0;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a!=b){
         flag=1;
    }
  }
  if(flag==1){
    cout<<"Happy Alex";

  }
  else cout<<"Poor Alex";



}
