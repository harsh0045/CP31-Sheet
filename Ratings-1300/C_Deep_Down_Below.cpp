#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(ll i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long ll ;
typedef long double ld;
typedef vector<int> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

void Harsh(){
    ll n;
    cin>>n;
    
    vector<pair<ll,ll>>temp(n);
    for(ll i=0;i<n;i++){
       ll k;
       cin>>k;
       ll first;
       cin>>first;
       first++;
      for(ll j=2;j<=k;j++){
          ll x;
          cin>>x;
          ll dif=j-1;
          ll ck=first+dif;
          if(ck<=x)first=first+(x-ck+1);
      }
      temp[i].first=first;
      temp[i].second=first+k;
    }
    sort(all(temp));
    ll ans=temp[0].first;
    ll dif=temp[0].second-temp[0].first;
    for(ll i=1;i<n;i++){
          if(ans+dif<temp[i].first){
                 ans=temp[i].first-dif;
           }
       dif=dif+(temp[i].second-temp[i].first);
    }
    cout<<ans<<" "<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}