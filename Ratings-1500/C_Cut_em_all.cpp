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

int dfs(int node, vector<vector<int>>&adj,vector<bool>&visited,int &ans){
    visited[node]=true;
    int count=0;
    for(auto it:adj[node]){
       if(!visited[it]){
          int val= dfs(it,adj,visited,ans);
          if(val%2==0)ans=ans+1;
          else count=count+val;
       }
    }
    return count+1;
}
void Harsh(){
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    int x,y;
    for(int i=0;i<n-1;i++){
       cin>>x>>y;
       adj[x].push_back(y);
       adj[y].push_back(x);
    }
    if(n%2){
        cout<<-1<<endl;
        return;
    }
    int ans=0;
    vector<bool>visited(n+1);
    dfs(1,adj,visited,ans);
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