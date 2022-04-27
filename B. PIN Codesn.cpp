#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int> mp;
        string pin;
        vector<string>v;
        v.push_back("dsd");
        char s[]= {'0','1','2','3','4','5','6','7','8','9'};
        for(int i=1; i<=n; i++)
        {
            cin>>pin;
            v.push_back(pin);
            mp.insert(make_pair(pin,i));
        }
        cout<<n-mp.size()<<endl;
        for(int i=1; i<=n; i++)
        {
            if(mp[v[i]]!=i)
            {


                    for(int ind=0; ind<10; ind++)
                    {
                        v[i][0]=s[ind];

                        if(mp[v[i]]==0)
                        {
                            cout<<v[i]<<endl;

                            mp[v[i]]=9;

                            break;
                        }
                    }

            }
            else
            {
                cout<<v[i]<<endl;
            }
        }

    }

}
