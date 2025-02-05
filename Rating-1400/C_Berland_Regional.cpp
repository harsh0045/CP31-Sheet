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
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int N = 2e5 + 5 ;

void Harsh(){
    ll n;
    cin>>n;
    vector<vector<ll>>temp(n+1);
    vector<ll>s(n);
    for(ll i=0;i<n;i++){
       cin>>s[i];
    }
    ll x;
    for(ll i=0;i<n;i++){
      cin>>x;
      temp[s[i]].push_back(x);
    }
    for(ll i=1;i<=n;i++){
       sort(rbegin(temp[i]),rend(temp[i]));
         ll sz=temp[i].size();
       for(ll j=1;j<sz;j++){
           temp[i][j]=temp[i][j]+temp[i][j-1];
       }
    }
    vector<ll>ans(n+1,0);
    for(ll i=1;i<=n;i++){   
       ll sz=temp[i].size();
       for(ll j=1;j<=sz;j++){
         if(sz<j)continue;
         ans[j]=ans[j]+temp[i][(sz/j)*j-1];
       }
    }
    for(ll i=1;i<=n;i++){
       cout<<ans[i]<<" ";
    }
    cout<<endl;
 
}
int main()
{
    fast;
    ll t=1;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}