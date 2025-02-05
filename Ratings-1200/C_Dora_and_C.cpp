#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll checkn(ll c,vector<ll>temp){
   ll n=temp.size();
   ll ans=temp[n-1]-temp[0];
   
   for(ll i=0;i<n-1;i++){
      if(c+temp[i]-temp[i+1]<ans){
        ans=c+temp[i]-temp[i+1];
      }
   }
   return ans;
  
}
void Harsh(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>temp(n);
    ll gcd=__gcd(b,a);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
      temp[i]%=gcd;
    }
    sort(begin(temp),end(temp));
    cout<<checkn(gcd,temp)<<endl;
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