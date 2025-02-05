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

vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i); // i is a divisor
            if (i != n / i) {
                divisors.push_back(n / i); // n/i is also a divisor
            }
        }
    }
    return divisors;
}

void Harsh(){
    int n;
    cin>>n;
   
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    vector<int>dp(n+1,1);
    dp[0]=0;
    int mx=1;
    for(int i=2;i<=n;i++){
       vector<int>divisible=getDivisors(i);
       for(auto it:divisible){
          if(temp[it-1]<temp[i-1])dp[i]=max(dp[i],dp[it]+1);
       }
       mx=max(mx,dp[i]);
    }
  
    cout<<mx<<endl;
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