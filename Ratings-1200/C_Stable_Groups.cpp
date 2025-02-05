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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }
    sort(all(temp));
    vector<ll>tp;

    for(ll i=1;i<n;i++){
       if((temp[i]-temp[i-1])<=x)continue;
       else{
          ll num=temp[i]-temp[i-1];
          if(num%x)num=num/x;
          else num=num/x -1;
          tp.push_back(num);
       }
    }
    sort(all(tp));
    ll count=0;
    ll sz=tp.size();
    while(count<sz && (k-tp[count])>=0){
       k-=tp[count++];
    }
    ll ans=tp.size()-count + 1;
    cout<<ans<<endl;
}
int main()
{
    fast;
   
        Harsh();

    return 0;
}