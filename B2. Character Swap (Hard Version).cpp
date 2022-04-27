#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define vi vector<int>v
#define vii<pair<int,int> >
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        int a[27];
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
            a[s1[i]-'a']++;
        }
        int flag=0;
        for(int i=0;i<27;i++){
            if(a[i]%2!=0){
               flag=1;
               break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
            continue;
        }
        int cnt=0;
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i]){
               // int j,j1;
                for(int k=i+1;k<n;k++){
                    if(s[i]==s[k]){
                        swap(s[k],s1[i]);
                        v.pb(mp(k+1,i+1));
                        cnt++;
                        break;
                    }
                    if(s[i]==s1[k]){
                        swap(s[k],s1[k]);
                        swap(s[k],s1[i]);
                        v.pb(mp(k+1,k+1));
                        v.pb(mp(k+1,i+1));
                        cnt+=2;
                        break;
                    }

                }
            }
        }
        cout<<"YES"<<endl;
        cout<<cnt<<endl;
         for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
         }
    }
}
