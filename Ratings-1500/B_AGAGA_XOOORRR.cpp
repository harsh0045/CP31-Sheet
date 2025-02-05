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
const int  N = 2e5 + 5 ;


void Harsh(){
    ll n;
    cin>>n;
   
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }

    for(ll i=0;i<n-1;i++){
       ll val=0;
      for(ll j=0;j<=i;j++)val=val^temp[j];
      ll ck=0;
      ll flag=false;
      for(ll j=i+1;j<n;j++){
        ck=ck^temp[j];
        if(ck==val){
            flag=true;
            ck=0;
        }
      }
      if(ck==0 && flag){
        cout<<"YES"<<endl;
        return;
      }
     
    }
   cout<<"NO"<<endl;
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