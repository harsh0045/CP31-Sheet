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
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

vector<ll>fact(14);
ll countbit(ll n){
   
    ll count=0;
    while(n>0){
         count+=(n&1);
         n/=2;
    }
    return count;
}
ll helper(ll n, ll k){
    if(fact[k]>n)return countbit(n);
    return min(helper(n,k+1),helper(n-fact[k],k+1)+1);
}
int main()
{
    fast;
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        fact[0]=1;
        for(ll i=1;i<14;i++){
         fact[i]=fact[i-1]*(i+1);
        }
        cout<<helper(n,0)<<endl;
    }
    return 0;
}