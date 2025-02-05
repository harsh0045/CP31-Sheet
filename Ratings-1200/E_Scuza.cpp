#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n,q;
    cin>>n>>q;
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }
    vector<pair<ll,ll>>k(q);
    for(ll j=0;j<q;j++){
       cin>>k[j].first;
       k[j].second=j;
    }
    vector<ll>ans(q);
    sort(begin(k),end(k));
    ll prev=0;
    ll ck=0;
    for(ll j=0;j<q;j++){
       while(ck<n && k[j].first>=temp[ck]){
          prev=prev+temp[ck];
          ck++;
       }
       ans[k[j].second]=prev;
       
    }
    for(ll j=0;j<q;j++){
       cout<<ans[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}
