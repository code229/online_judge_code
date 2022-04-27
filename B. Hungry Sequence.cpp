
#include <bits/stdc++.h>

using namespace std;
#define N 1299716
int cnt=0,n;
bool is_prime[N];
void sieve(){

    memset(is_prime, true, sizeof(is_prime));
    for (int p = 2; p * p < N; p++)
        if (is_prime[p] == true)
            for (int i = p * 2; i < N; i += p)
                is_prime[i] = false;
   for(int i=2;i<N;i++){
      if(is_prime[i]) {

            cnt++;
            cout<<i<<" ";
            if(cnt==n) return;
      }

   }
}


int main()
{
    cin>>n;
    sieve();
}


