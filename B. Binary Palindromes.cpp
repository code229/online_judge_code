#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;
while(n--){
    int k;
    cin>>k;
    int a1=0;
    int a0=0;
    int a[k];
    for(int i=0;i<k;i++){
        string s;
        cin>>s;
        a[i]=(s.size())/2;
        for(int j=0;j<s.size();j++){
            if(s[j]=='0') a0++;
            else a1++;
        }


    }
    //cout<<a0<<" "<<a1<<endl;
    int t=a0/2+a1/2;
  //  cout<<t<<endl;
    int cnt=0;
    for(int i=0;i<k;i++){
        if(a[i]>t) break;
        cnt++;
        t-=a[i];

    }
    cout<<cnt<<endl;


}

}

