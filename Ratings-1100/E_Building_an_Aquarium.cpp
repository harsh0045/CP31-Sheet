#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPossible(ll w, ll h, vector<ll>temp){
    ll sum=0;
    for(auto it:temp){
       sum=sum+max(0LL,h-it);
    }
    return sum<=w;

}
void Harsh(){
    ll n,w;
    cin>>n>>w;
    vector<ll>temp(n);
    ll mini=1e9;
    for(ll i=0;i<n;i++){
      cin>>temp[i];
      mini=min(mini,temp[i]);
    }
    ll low=mini;
    ll high=2*1e9;
    ll ans=-1;
    while(low<=high){
        ll h=(low)+(high - low)/2;
        if(isPossible(w,h,temp)){
            ans=h;
            low=h+1;
        }else{
           high=h-1;
        }
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