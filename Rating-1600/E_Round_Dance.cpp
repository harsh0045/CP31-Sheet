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
    int n;
    cin>>n;
    vector<int>as(n);
    vector<int>used(n,0);
    for(int i=0;i<n;++i)cin>>as[i],--as[i],used[i]=0;
    int co=0,cc=0;
    for(int i=0;i<n;++i)
      if(!used[i]){
        int x=i;
        int p=x;
        int pp=x;
        while(!used[x]) {
            used[x]=1;
            int y = as[x];
            pp=p;
            p=x;
            x=y;
        }
        if (x==pp) {
           ++co;
        } else if (x==i) {
          ++cc;
        } 
    }
    cout<<cc+!!co<<' '<<cc+co<<'\n';

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