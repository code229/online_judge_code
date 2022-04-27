
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++) cin>>a[i],s.insert(a[i]);
    if(s.size()==1 && n>=2){
        cout<<1<<endl;
        cout<<a[0];
    }
    else if(n==1){
        cout<<-1;
    }
    else if(n==2){
            if(a[0]!=a[1]){

        int l=max(a[0],a[1])-min(a[0],a[1]);
        int aa=min(a[0],a[1])-l;
        int mid=(a[0]+a[1])/2;
        int c=max(a[0],a[1])+l;
        if(mid-aa==c-mid){
                cout<<3<<endl;
            cout<<aa<<" "<<mid<<" "<<c;
        }
        else{
            cout<<2<<endl;
            cout<<aa<<" "<<c;
        }

    }
    else{
        cout<<1<<endl;
        cout<<a[0];
    }
    }
    else{
        sort(a,a+n);
        map<int,int>mp;
        for(int i=0;i<n-1;i++){
            mp[a[i+1]-a[i]]++;
        }
        if(mp.size()>2){
            cout<<0;
        }
        else if(mp.size()==1){
            int dif=a[1]-a[0];
            cout<<2<<endl;
            cout<<a[0]-dif<<" "<<a[n-1]+dif;
        }

        else{
            map<int,int>::iterator it;
            vector<int>v;
            int mn=0,ll=-1;
            int mnn=INT_MAX;
            for(it=mp.begin();it!=mp.end();it++){
                    v.push_back(it->second);
                    if(it->first!=0 and it->second==1) ll=it->first;

                    mnn=min(mnn,it->first);

            }
            if(v[0]>1 and v[1]>1 or mnn==0){
                cout<<0;
            }
            else{
                //cout<<1<<endl;
               int ss=-1;
                for(int i=0;i<n-1;i++){
                    if(a[i+1]-a[i]==ll  and (a[i+1]-a[i])/2==mnn){
                        ss=(a[i]+a[i+1])/2;
                        break;

                    }


                }

                if(ss!=-1){
                    cout<<1<<endl;
                    cout<<ss<<endl;
                }
                else{
                    cout<<0<<endl;
                }

            }
        }
    }

}
