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

void operation(map<int,vector<int>>&mp,ll &ans){
     ll sum=0;
     for(auto it:mp){
       sort(all(it.second));
       for(auto c:it.second){
          sum=sum+c;
       }
       int sz=it.second.size();
       for(int i=1;i<=sz;i++){
          ans=ans+(sum-(long long)it.second[i-1]*(sz-i+1));
          sum-=it.second[i-1];
       }
       sum=0;
    }
}

void Harsh(){
    int n,m;
    cin>>n>>m;
    map<int,vector<int>>row;
    map<int,vector<int>>col;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
         int x;
         cin>>x;
         row[x].push_back(i);
         col[x].push_back(j);
      }
    }
    ll ans=0;
    operation(row,ans);
    operation(col,ans);
   
    cout<<ans<<endl;
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

 