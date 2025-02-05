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

bool isPossible(vector<pair<int,int>>&temp,int k){
   
    int l=temp[0].first;
    int r=min(temp[0].second,k);
    int n=temp.size();
    if(l>r)return false;
    for(int i=1;i<n;i++){
       int x=temp[i].first;
       int y=temp[i].second;
       l=max(x,l-k);
       r=min(y,r+k);
       if(r<l)return false;
    }
    return true;
}

void Harsh(){
    int n;
    cin>>n;
    
    vector<pair<int,int>>temp(n);
    int end=0;
    for(int i=0;i<n;i++){
      int l,r;
      cin>>l>>r;
      temp[i].first=l;
      temp[i].second=r;
      end=max(end,max(l,r));
    }
    int low=0;
    while(low<end){
        int mid= low + (end-low)/2;
        if(isPossible(temp,mid)){
            end=mid;
        }else{
            low=mid+1;
        }
    }
    cout<<low<<endl;
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