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
typedef vector<ll> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int N = 2e5 + 5 ;

vector<ll>primes;
vector<ll>lp(1e6+1,0);
void linearSieve() {

    for (ll i = 2; i <= 1e6; ++i) {
        if (lp[i] == 0) { // i is a prime number
            lp[i] = i;    // Mark the smallest prime factor of i as i itself
            primes.push_back(i); // Add i to the list of primes
        }
        for (ll j = 0; i * primes[j] <= 1e6; ++j) {
            lp[i * primes[j]] = primes[j];
            if(lp[i]==primes[j])break; // Mark the smallest prime factor of i * primes[j]
        }
    }
}

void Harsh(){
    ll n;
    cin>>n;
   
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }
    map<ll,ll>umap;
    for(ll i=0;i<n;i++){
      ll val=temp[i];
      while(val>1){
        ll sp=lp[val];
        while(val%sp==0){
            umap[sp]=(umap[sp]+1)%n;
            val/=sp;
        }
      }
    }
      for(auto it:umap){
         if(it.second!=0){
            cout<<"NO"<<endl;
            return;
         }
      }
      cout<<"YES"<<endl;
}

int main()
{
    fast;
    ll t;
    cin>>t;
    linearSieve();
    while(t--){
        Harsh();
    }
    return 0;
}