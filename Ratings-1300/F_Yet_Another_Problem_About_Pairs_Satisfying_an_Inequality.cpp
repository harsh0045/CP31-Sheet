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
    int n;
    cin>>n;
    vector<int>temp(n+1,0);
    for(int i=1;i<=n;i++){
      cin>>temp[i];
    }
    vector<int>dp(n+1,0);
    ll ans=0;
    for(int i=1;i<=n;i++){
       if(temp[i]<i)dp[i]=dp[i-1]+1;
       else dp[i]=dp[i-1];
       if(i>2 && temp[i]<i && (temp[i]-1)>=1){
          ans=ans+dp[temp[i]-1];
       }
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}