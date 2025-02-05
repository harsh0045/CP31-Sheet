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
    ll n,q;
    cin>>n>>q;
    vector<ll>temp(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
      cin>>temp[i];
      sum+=temp[i];
    }
    unordered_map<ll,ll>umap;
    ll prevt2=-1;
    for(ll i=0;i<q;i++){
       ll t12;
       cin>>t12;
       if(t12==1){
         ll pos,ele;
         cin>>pos>>ele;
         if((umap.find(pos)!=umap.end()) || (prevt2==-1)){
           sum=sum-temp[pos-1]+ele;
         }else{
            sum=sum-prevt2+ele;
         }
         temp[pos-1]=ele;
         umap[pos]=ele;
         cout<<sum<<endl;
       }else{
         ll t2v;
         cin>>t2v;
         prevt2=t2v;
         sum=(t2v*n);
         umap.clear();
         cout<<sum<<endl;
       
       }
    }
}
int main()
{
    fast;
    Harsh();
   
    return 0;
}