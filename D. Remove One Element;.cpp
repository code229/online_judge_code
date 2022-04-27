#include<bits/stdc++.h>
using namespace std;
#define n 10000001
bool prime[n];



void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

}


int main()
{
    SieveOfEratosthenes();
    int n1;
    while(1){
     scanf("%d",&n1);
    if(n1==0){
        break;
    }
    long long sum=0;
    int k;
    for(int i=0;i<n1;i++){
        cin>>k;
        if(prime[k]) sum+=k;
    }
    cout<<sum<<endl;
    }
}
