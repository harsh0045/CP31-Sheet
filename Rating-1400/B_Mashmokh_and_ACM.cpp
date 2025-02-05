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
typedef long long  ll;
typedef long double ld;
typedef vector<int> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

vector<ll>getAlldivisor(ll n){
    vector<ll>ans;
    for(ll i=1;i*i<=n;i++){
       if(n%i==0){
         ans.push_back(i);
         if(i!=n/i)ans.push_back(n/i);
       }
    }
    return ans;
}

void Harsh(){
    ll n,k;
    cin>>n>>k;
    vector<ll>prev(n+1);
    for(ll i=0;i<=n;i++){
       prev[i]=1;
    }
    prev[0]=0;
    vector<vector<ll>>dive(n+1);
    for(ll i=1;i<=n;i++){
       vector<ll>divi=getAlldivisor(i);
       for(auto it:divi){
           dive[i].push_back(it);
       }
      
    }
    for(ll i=2;i<=k;i++){
       vector<ll>temp(n+1,0);
       for(ll j=1;j<=n;j++){
          for(auto it:dive[j]){
              temp[j]=(temp[j]+prev[it])%M;
          }
       }
       prev=temp;
    }
    ll ans=0;
    for(auto it:prev){
       ans=(ans+it)%M;
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t=1;
    // cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}