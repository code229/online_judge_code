//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    int cnt=0;
//    int a=1;
//    int b=2;
//    cnt+=2;
//    int sum=0;
//    sum+=3;
//    if(n<2){
//        cout<<n;
//        return 0;
//    }
//    while(1){
//        int c=a+b;
//        a=b;
//        b=c;
//        sum+=c;
//        //cout<<c<<" ";
//        if(sum>n) break;
//        cnt++;
//    }
//    cout<<cnt;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int po=1;
    while(true){
        if(n>0) cnt++;
        else break;
        n-=po;
        po*=2;
    }
    cout<<cnt;
}
