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

int modular_multiply(int a, int b, int M) {
    int result = 0;
    a = a % M;
    while (b > 0) {
        // If b is odd, add 'a' to the result
        if (b % 2 == 1) {
            result = (result + a) % M;
        }
        // Double 'a' and halve 'b'
        a = (a * 2) % M;
        b /= 2;
    }
    return result;
}

void Harsh(){
    int md=1000000007;
    int n,k;
    cin>>n>>k;
    int ans=1;
    for(int i=1;i<=k;i++){
        ans=modular_multiply(ans,n,M);
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