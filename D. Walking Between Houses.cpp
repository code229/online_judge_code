#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long n,k,s;
    cin>>n>>k>>s;
    if((k*(n-1))<s || (s==1 && k!=1) || k>s){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    long long a=s/k,m=0,f,chk=0;
    if(s%k!=0){

        for(int i=0;i<s%k;i++){
            if(m==0) cout<<1+(s/k)+1<<" ",m=1;
            else cout<<1<<" ",m=0;

        }
        if(m==0) f=1;
        else f=1+(s/k)+1;
        int t=0;
         for(int i=0;i<(k-(s%k));i++){
            if(m==0) cout<<f+(s/k)<<" ",m=1,chk=1;
            else {
                    if(chk==0){
                        cout<<2<<" ";
                        f=2;
                        m=0;
                        t++;
                    }
                    else{
                        cout<<f<<" ";
                        m=0;
                    }
            }

        }


    }
    else{
          for(int i=0;i<k;i++){
            if(m==0) cout<<1+(s/k)<<" ",m=1;
            else cout<<1<<" ",m=0;

        }
    }

}
