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

int findLargestN(int l, int r) {
    int c = 2 * (r - l);
    double discriminant = 1.0 + 4.0 * c;  // b^2 - 4ac for the quadratic equation n^2 + n - 2*(r-l) = 0
    
    if (discriminant < 0) return 0;  // No real solution exists

    double n = (-1.0 + sqrt(discriminant)) / 2.0;  // Positive root of the quadratic equation

    return floor(n);  // Return the largest integer n
}
void Harsh(){
    int l,r;
    cin>>l>>r;
    
    int ans=findLargestN(l,r);
    cout<<ans+1<<endl;
   
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