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


void dfs(int node,vector<bool>&visited,vector<int>&ans,vector<vector<int>>&adj){
    ans.push_back(node);
    visited[node]=true;
    for(auto it:adj[node]){
        if(!visited[it]){
            dfs(it,visited,ans,adj);
        }
    }
}
void Harsh(){
    int n,m;
    cin>>n>>m;
    
    vector<bool>visited(n+1,false);
    vector<vector<int>>adj(n+1);

    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
   
    priority_queue <int, vector<int>, greater<int>> pq;
    pq.push(1);
    visited[1]=true;
    while(!pq.empty()){
        int node=pq.top();
        pq.pop();
        cout<<node<<" ";
        for(auto it:adj[node]){
            if(!visited[it]){
                visited[it]=true;
                pq.push(it);
            }
        }
    }
    cout<<endl;
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