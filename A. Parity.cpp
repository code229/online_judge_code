#include<bits/stdc++.h>
using namespace std;
int b[100001];
void calculate(int n){

}
int main()
{
    int b,k;
    cin>>b>>k;
    int cnto=0,cnte=0;
    for(int i=0;i<k;i++){
        int n;
        cin>>n;
        if(b%2==0){
           if(i==(k-1)) {
                if(n%2==0) cnte++;
                else cnto++;
           }
           else cnte++;


        }
        else{
            if(n%2==0) cnte++;
            else cnto++;
        }
    }
    if(cnto%2!=0) cout<<"odd";
    else cout<<"even";
}
