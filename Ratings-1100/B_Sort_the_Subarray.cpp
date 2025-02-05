#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
      cin>>a[i];
    }
    vector<ll>b(n);
    for(ll i=0;i<n;i++){
      cin>>b[i];
    }
    ll l=-1,r=-1;
    for(ll i=0;i<n;i++){
       if(b[i]!=a[i]){
         if(l!=-1)r=i+1;
         else l=i+1;
       }
    }
    if(l==-1 && r==-1){l=1;r=n;}
    else if(r==-1)r=n;
    else{
        while(l>=2 && b[l-1]>=b[l-2])l--;
        while(r<=n-1 && b[r-1]<=b[r])r++;
    }
    cout<<l<<" "<<r<<endl;

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