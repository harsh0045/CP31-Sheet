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
   
    vector<pair<int,int>>temp;
    unordered_map<int,int>umap;
    int x,y;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      if(x==y)umap[x]++;
      temp.push_back(mp(x,y));
    }
    vector<int>visited(2*n+1,0);
    for(auto it:umap){
        visited[it.first]=1;
    }
    for(int i=1;i<=2*n;i++){
        if(visited[i]!=0)visited[i]+=visited[i-1];
    }
    string ans;
    for(int i=0;i<n;i++){
        int l=temp[i].first;
        int r=temp[i].second;
        if(l==r){
            if(umap[l]>1)ans.push_back('0');
            else ans.push_back('1');
        }else{
            if(visited[r]>=(r-l+1))ans.push_back('0');
            else ans.push_back('1');
        }

    }
    cout<<ans<<endl;

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