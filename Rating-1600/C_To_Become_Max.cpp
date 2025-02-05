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

bool checkIfPossible(int ind, int m, int k, vector<int> &arr){
    int n = arr.size(),cnt=0;
    while(ind<n){
        int left = m-cnt-arr[ind];
        if(left<=0)return 1;
        if(left>k)return 0;
        k-=left;
        ind++;
        cnt++;
    }
    return 0;
}
 
bool check (int m, int k, vector<int>&arr){
    int n = arr.size();
    rep(i,0,n){
        if(checkIfPossible(i,m,k,arr)){
            return 1;
        }
    }
    return 0;
}
 
void Harsh(){
    int n ,k,x,mx=0;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mx=max(mx,arr[i]);
    }

    int l=0,r=n+2*mx;
    while(l<=r){
        int m = (l+r)/2;
        if(check(m, k, arr)){
            l = m+1;
        }else{
            r = m-1;
        }
    }
    cout<<r<<endl;
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
