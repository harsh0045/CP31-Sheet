#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n,m;
    cin>>n>>m;
    vector<ll>temp(n);
    ll mini=1e9;
    ll maxi=1;
    for(ll i=0;i<n;i++){
      cin>>temp[i];
      mini=min(mini,temp[i]);
      maxi=max(maxi,temp[i]);
    }
    for(ll j=0;j<m;j++){
       char c;
       cin>>c;
       ll l,r;
       cin>>l>>r;
       if(c=='+'){
          if(maxi>=l && maxi<=r)maxi+=1;
          if(mini>=l && mini<=r)mini+=1;
       }else{
          if(maxi>=l && maxi<=r)maxi-=1;
          if(mini>=l && mini<=r)mini-=1;
       }
       cout<<maxi<<" ";
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