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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<vector<ll>>temp(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>temp[i][j];
        }
    }
    ll x=0;
    ll y=0;
    for(auto &it:s){
        if(it=='D'){
            ll sum=0;
           for(ll i=0;i<m;i++){
             sum=sum+temp[x][i];
           }
           temp[x][y]=-sum;
           x++;
        }else {
            ll sum=0;
           for(ll i=0;i<n;i++){
             sum=sum+temp[i][y];
           }
           temp[x][y]=-sum;
           y++;
        }
    }
    ll sum=0;
    for(ll i=0;i<n;i++)sum=sum+temp[i][m-1];
    temp[n-1][m-1]=-sum;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
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