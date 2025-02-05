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

ll product(ll a, ll b){
    return a*b;
}
void operation(vector<int>&temp,ll &curr, int k){
    int x=0;
    for(int i=1;i<=k;i++){
       cin>>x;
       if(temp[x]){
          curr=curr+temp[x];
       }
       temp[x]++;

    }
}
void Harsh(){
    ll a,b,k;
    cin>>a>>b>>k;

    ll curr=0;
    vector<int>temp(a+1,0);
    operation(temp,curr,k);
    vector<int>arr(b+1,0);
    operation(arr,curr,k);
    cout<< product(k,k-1)/2LL - curr<<endl;
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