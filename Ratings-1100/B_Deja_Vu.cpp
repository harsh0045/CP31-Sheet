#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int mod=1e9+7;
 
  void Harsh()
  {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n),v;
        for(ll i=0;i<n;i++) cin>>a[i];
       
        for(ll i=0;i<q;i++)
        {
            ll x;
            cin>>x;
            if(v.empty())
            {
                v.push_back(x);
            }
            else if(x<v.back())
            {
                v.push_back(x);
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            ll curr=(1<<v[i]);
            for(ll j=0;j<n;j++)
            {
                if(a[j]%curr==0) a[j]+=curr/2;
            }
        }
        for(ll i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}