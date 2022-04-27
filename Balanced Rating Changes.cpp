#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ai;
    cin>>n;
    int ap=0,an=0;
    while(n--)
    {
        cin>>ai;
        if((ai%2)!=0){
            if(ai>0){
                cout<<(ai/2)+ap<<endl;
                ap==0?ap=1:ap=0;
            }
            if(ai<0){
                cout<<(ai/2)+an<<endl;
                an==0?an=-1:an=0;
            }
        }
        else{
            cout<<(ai/2)<<endl;
        }
    }


}
