#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll,ll>
using namespace std;
void Harsh(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pl>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i].first>>temp[i].second;
    }
    ll mins=1e18;
    ll mind=1e18;
    ll ans=abs(temp[b-1].first - temp[a-1].first)+abs(temp[b-1].second - temp[a-1].second);
    for(ll i=0;i<k;i++){
        ll currs=abs(temp[a-1].first-temp[i].first)+abs(temp[a-1].second-temp[i].second);
        ll currd=abs(temp[b-1].first-temp[i].first)+abs(temp[b-1].second-temp[i].second);
        mins=min(mins,currs);
        mind=min(mind,currd);
    }
    ans=min(ans,mind+mins);
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}