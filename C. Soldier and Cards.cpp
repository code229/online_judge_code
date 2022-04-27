#include<bits/stdc++.h>
using namespace std;
set<int>mp;
map<int,pair<int,int> >m;
int main(){
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<2;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int vv;
            cin>>vv;
            if(i==0) v1.push_back(vv);
            else v2.push_back(vv);
        }
    }
    int cnt=0;
    int flag=0,flag1=0;
    int lmt=39916800;
    int winner;
    string s1;
    while(1){

        if(v1[0]>v2[0]){
            int x2=v2[0];
            v2.erase(v2.begin());
            int  x=v1[0];
            v1.erase(v1.begin());
            v1.push_back(x2);
            v1.push_back(x);
            cnt++;
            if(v2.size()==0) {
                    flag=1,winner=1;
            }
             int st=0;
             int it=10;
            for(int i=0;i<v1.size();i++){
              st=(it*st)+v1[i];
            }
            for(int i=0;i<v2.size();i++) {
                st=(it*st)+v2[i];
            }
           //cout<<s<<endl;

          int ss=mp.size();
          mp.insert(st);
          if(ss==mp.size() && m[st].first==v1.size()) {
            flag1=1;
          }
          else{
            mp.insert(st);
            m.insert(make_pair(st,make_pair(v1.size(),v2.size())));
          }
        }
        else if(v2[0]>v1[0]){
            int x2=v1[0];
            v1.erase(v1.begin());
            int  x=v2[0];
            v2.erase(v2.begin());
            v2.push_back(x2);
            v2.push_back(x);
            cnt++;

            if(v1.size()==0) {
                    flag=1,winner=2;
            }
            int st=0;
            int it=10;
            for(int i=0;i<v1.size();i++){
              // int y=v1[i]+48;
               // s+=y;
              st=(it*st)+v1[i];
            }
            for(int i=0;i<v2.size();i++) {
              st=(it*st)+v2[i];
            }

             int ss=mp.size();
              mp.insert(st);
          if(ss==mp.size() && m[st].first==v1.size()) {
            flag1=1;
          }
          else{
            mp.insert(st);
            m.insert(make_pair(st,make_pair(v1.size(),v2.size())));
          }
        }
        if(flag==1 || flag1==1 ) break;
        //if(cnt>lmt) break;
    }

    set<int>::iterator it;
   // cout<<mp[1324]<<endl;
  //  for(it=mp.begin();it!=mp.end();it++) cout<<*it<<" ";
   // cout<<flag;
    if(flag==1){
        cout<<cnt<<" "<<winner;
    }
    else cout<<"-1";

}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//    vector<int>v1;
//    vector<int>v2;
//    for(int i=0;i<2;i++){
//        int k;
//        cin>>k;
//        for(int j=0;j<k;j++){
//            int vv;
//            cin>>vv;
//            if(i==0) v1.push_back(vv);
//            else v2.push_back(vv);
//        }
//    }
//    int cnt=0;
//    int flag=0;
//    int lmt=39916800;
//    int winner;
//    while(1){
//
//        if(v1[0]>v2[0]){
//            int x2=v2[0];
//            v2.erase(v2.begin());
//            int  x=v1[0];
//            v1.erase(v1.begin());
//            v1.push_back(x2);
//            v1.push_back(x);
//            cnt++;
//            if(v2.size()==0) flag=1,winner=1;
//        }
//        else if(v2[0]>v1[0]){
//            int x2=v1[0];
//            v1.erase(v1.begin());
//            int  x=v2[0];
//            v2.erase(v2.begin());
//            v2.push_back(x2);
//            v2.push_back(x);
//            cnt++;
//            if(v1.size()==0) flag=1,winner=2;
//        }
//        if(flag==1) break;
//        if(cnt>lmt) break;
//    }
//    if(flag==1){
//        cout<<cnt<<" "<<winner;
//    }
//    else cout<<"-1";
//
//}
//
