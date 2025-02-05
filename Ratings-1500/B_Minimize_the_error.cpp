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

void Harsh(){
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    vector<ll>temp1(n);
    vector<ll>temp2(n);
    for(int i=0;i<n;i++){
      cin>>temp1[i];
    }
    for(int i=0;i<n;i++){
      cin>>temp2[i] ;
    }
    priority_queue<ll>pq;
    for(int i=0;i<n;i++){
        ll val=abs(temp1[i]-temp2[i]);
        pq.push(val);
    }
    ll total=k1+k2;
    while(total--){
        ll val=abs(pq.top()-1);
   
        pq.pop();
        pq.push(val);
    }
    ll ans=0;
    while(!pq.empty()){
        ll val=pq.top();
    
        ans= ans + val*val;
        pq.pop();
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