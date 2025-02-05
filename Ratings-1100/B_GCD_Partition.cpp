#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    vector<ll>temp(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
      cin>>temp[i];
      sum+=temp[i];
    }
    ll ans=1;
    ll curr=0;
    for(ll i=0;i<n-1;i++){
       curr+=temp[i];
       ans=max(ans,__gcd(curr,sum-curr));
    }
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