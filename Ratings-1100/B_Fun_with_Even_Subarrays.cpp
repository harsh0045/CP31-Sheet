#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }
    ll eqe=temp[n-1];
    ll i=n-1;
    ll count=0;
    ll ans=0;
    while(1){
        while(i>=0 && eqe==temp[i]){i--;count++;}
        if(i<0)break;
        count=2*count;
        ans++;
        i=n-1-count;
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