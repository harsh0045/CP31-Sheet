#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp mxke_pair
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
    cin >> n;
     vector<int>temp(n+1,0),tmp(n+1,0),mx(n+1,0);
    for (int i = 1; i <= n; i++)cin >> temp[i];
    for (int i = 1; i <= n; i++) {
        int t = temp[i];
        mx[i] = max(mx[i], mx[i - 1]);
        if (i + t <= n)tmp[i] = temp[i] + mx[i] + 1;
        if(i + t + 1<= n)mx[i + t + 1] = max(mx[i + t + 1], tmp[i]);
    }
    int maxi = 0;
    for (int i = 1; i <= n; i++) {
        maxi = max(maxi, tmp[i]);
    }
    cout << n - maxi << endl;
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