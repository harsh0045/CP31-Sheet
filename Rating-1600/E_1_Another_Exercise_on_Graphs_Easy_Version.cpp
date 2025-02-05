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

void dfs(vector<bool>&visited,int u,int v,int k,priority_queue<int, vector<int>, greater<int>>pq,vector<vector<pair<int,int>>>&temp, vector<priority_queue<int, vector<int>, greater<int>>>&ans){
      if(u==v){
         ans.push_back(pq);
         return;
      }
      visited[u]=true;
      priority_queue<int, vector<int>, greater<int>>tp=pq;
      for(int i=0;i<temp[u].size();i++){
         if(!visited[temp[u][i].first]){
            if(pq.size()<k){
               pq.push(temp[u][i].second);
            }else if(pq.top()<temp[u][i].second){
                pq.pop();
                pq.push(temp[u][i].second);
            }
            
            dfs(visited,temp[u][i].first,v,k,pq,temp,ans);
            pq=tp;
         } 
      }
      visited[u]=false;
 }
void Harsh(){
    int n,m,q;
    cin>>n>>m>>q;
    
    vector<vector<pair<int,int>>>temp(n+1);
    int u,v,w;
    for(int i=0;i<m;i++){
      cin>>u>>v>>w;
      temp[u].push_back({v,w});
      temp[v].push_back({u,w});
    }
  
    vector<vector<int>>temp2(q,vector<int>(3));
    for(int i=0;i<q;i++){
       cin>>temp2[i][0]>>temp2[i][1]>>temp2[i][2];
    }
  
    for(int i=0;i<q;i++){
         int a,b,k;
         a=temp2[i][0];
         b=temp2[i][1];
         k=temp2[i][2];
       priority_queue<int, vector<int>, greater<int>>pq;
       vector<priority_queue<int, vector<int>, greater<int>>>ans;
       vector<bool>visited(n+1,false);
       dfs(visited,a,b,k,pq,temp,ans);
       int mini=INT_MAX;
       for(int j=0;j<ans.size();j++){
           mini=min(mini,ans[j].top());
       }
       cout<<mini<<" ";
    }
   cout<<endl;
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