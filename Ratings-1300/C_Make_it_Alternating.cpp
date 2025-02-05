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
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

const int md=998244353;

void Harsh(){
    string s;
    cin>>s;
    ll count0=0,count1=0;
    ll ans1=0;
    ll ans2=1;
    for(auto it:s){
       if(it=='0'){
          count0++;
          if(count1!=0){
            ans2=(ans2*count1)%md;
            ans1+=(count1-1);
          }
          count1=0;
       }
       else{
          count1++;
          if(count0!=0){
           ans2=(ans2*count0)%md;
           ans1+=(count0-1);
          }
          count0=0;
       }
    }
    if(count0!=0){
           ans2=(ans2*count0)%md;
           ans1+=(count0-1);
     }
    if(count1!=0){
            ans2=(ans2*count1)%md;
            ans1+=(count1-1);
    }
    for(int i=1;i<=ans1;i++){
       ans2=(ans2*i)%md;
    }

    cout<<ans1<<" "<<ans2<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}