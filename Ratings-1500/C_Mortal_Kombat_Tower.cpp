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
        ll n;
        cin >> n;
        ll temp[n+1];
        ll dp[n+1][3];
        for (int i = 1; i <= n; i++)
        {
            cin >> temp[i];
            dp[i][1] = dp[i][2] =1000000000000000000;
        }
        if (n <= 2)
            cout << temp[1] << '\n';
        else
        {
            dp[0][1] = dp[0][2] = 1000000000000000000;
            dp[1][2] = temp[1];
            dp[1][1] = 100000000000000;
            dp[2][1] = temp[1];
            dp[2][2] = temp[1] + temp[2];
            for (int i = 3; i <= n; i++)
            {
              
                  dp[i][1] = min(dp[i - 1][2], dp[i - 2][2]);
                  dp[i][2] = min(dp[i - 1][1] + temp[i], dp[i - 2][1] + temp[i - 1] + temp[i]);
              
              
            }
            cout << min(dp[n][1], dp[n][2]) << '\n';
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