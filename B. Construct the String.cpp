
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    string s="abcdefghijklmnopqrstuvwxyz";
    while(t--){

        int n,a,d,cnt=0;
        cin>>n>>a>>d;
        //int ind=n/d;
       // string s1=s.substr(0,d);
        for(int i=0;i<n;i++){

            if(cnt<d){
                cout<<s[cnt];
                cnt++;
            }
            else{
                cnt=0;
                cout<<s[0];
                cnt++;
            }
        }


        cout<<endl;
    }

}
