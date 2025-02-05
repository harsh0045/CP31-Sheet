#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll,ll>
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    vector<ll>temp(1001,0);
    ll i1=-1;
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      temp[x]=i+1;
      if(x==1)i1=i+1;
    }
    ll ans=-1;

    for(ll i=1;i<=1000;i++){
       for(ll j=1;j<=1000;j++){
          if(i!=j && temp[i] && temp[j] &&__gcd(i,j)==1){
                ans=max(ans,temp[i]+temp[j]);
          }
       }
    } 
    ans=max(ans,2*i1);
    cout<<ans<<endl;

}
int  main()
{
   
    ll t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}