#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int MOD=1e9 + 7 ;
void Harsh(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    
    for(ll i=0;i<n;i++){
       cin>>a[i];
    }
   
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=1;
    ll x=n-1;
    ll y=n-1;
    ll count=0;
    ll ck=0;
    while(y>=0){
        while(x>=0 && a[x]>b[y]){
            x--;
            count++;
        }
        ans=(ans*(count-ck))%MOD;
        y--;
        ck++;
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