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
        ll n, m, q;
        cin >> n >> m >> q;
        
        vector<ll> t(m);
        vector<ll> st(q);
        
        for (ll i = 0; i < m; ++i) {
            cin >> t[i];
        }
        
        for (ll i = 0; i < q; ++i) {
            cin >> st[i];
        }
    
        sort(all(t));
        for (ll i = 0; i < q; ++i) {
            ll d_p = st[i];
            auto lw = lower_bound(t.begin(), t.end(), d_p);
            auto uw= upper_bound(t.begin(),t.end(),d_p);
            ll md = LLONG_MAX;
            if (lw != t.end()) {
                md = min(md, abs(*lw - d_p));
            }
            if (lw != t.begin()) {
                lw--;
                md = min(md, abs(*lw - d_p));
            }
          
            if (m == 1) {
                ll tp = t[0];
                ll me = max(d_p - 1, n - d_p); 
                md = max(md, me); 
            }
            
            cout << md << "\n";  
        }
}
int main()
{
    fast;
    int t=1;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}