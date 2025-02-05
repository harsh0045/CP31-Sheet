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
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>>temp(n,vector<char>(m));
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cin>>temp[i][j];
      }
    }
    vector<vector<int>>dp(n,vector<int>(m,0));
    
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
            int count=0;
            int left=j-1;
            int right=j+1;
            int up=i-1;
            int down=i+1;
            if(left>=0 && temp[i][left]=='R')count++;
            if(right<=m-1 && temp[i][right]=='L')count++;
            if(up>=0 && temp[up][j]=='D')count++;
            if(down<=n-1 && temp[down][j]=='U')count++;
            temp2[i][j]=temp2
        
        
      }
    }
    cout<<count<<endl;
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