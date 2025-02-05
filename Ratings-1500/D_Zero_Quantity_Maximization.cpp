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
    long long n;
    cin>>n;
  
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
      cin>>a[i] ;
    }
    for(int i=0;i<n;i++){
       cin>>b[i] ;
    }
    map<pair<int,int>,int>umap;
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++){
       if(a[i]==0 && b[i]!=0)continue;
       else if (a[i]==0 && b[i]==0)count++;
       else{
            int value=__gcd(a[i],b[i]);
            a[i]=a[i]/value;
            b[i]=b[i]/value;
            umap[{a[i],b[i]}]++;
            ans=max(ans,umap[{a[i],b[i]}]);
       }
     
    }
   cout<<ans+count<<endl;
}
int main()
{
    fast;
    int t=1;
    // cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}