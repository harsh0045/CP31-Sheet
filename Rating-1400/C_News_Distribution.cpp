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

int findUparent(vector<int>&parent,int i){
   if(parent[i]==i)return i;
   return parent[i]=findUparent(parent,parent[i]);
}
void unionByrank(int a, int b, vector<int>&parent,vector<int>&rank){
    if(a != b){
        if(rank[a]<rank[b]){
             parent[a]=b;
        }else if(rank[a]>rank[b]){
            parent[b]=a;
        }else{
           parent[b]=a;
           rank[a]++;
        }
    }
}
void Harsh(){
    int n,m;
    cin>>n>>m;
    vector<int>parent(n+1,0);
    // vector<int>rank(n+1,1);
    vector<int>sz(n+1,0);
    for(int i=1;i<=n;i++){
       parent[i]=i;
    }
    int k;
    for(int i=0;i<m;i++){
      cin>>k;
        int firstvalue,val;
        for(int j=0;j<k;j++){
            cin>>val;
            if(j==0)firstvalue=val;
            else{
                int parent_a=findUparent(parent,val);
                int parent_b=findUparent(parent,firstvalue);
                // unionByrank(parent_a,parent_b,parent,rank);
                parent[parent_a]=parent_b;

            }
        }
    }
    for(int i=1;i<=n;i++){
       parent[i]=findUparent(parent,i);
       sz[parent[i]]++;
    }
    
    for(int i=1;i<=n;i++){
      cout<<sz[parent[i]]<<" ";
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