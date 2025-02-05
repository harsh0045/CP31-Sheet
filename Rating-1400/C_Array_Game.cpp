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
typedef long long  ll;
typedef long double ld;
typedef vector<int> vi;
#define nl cout << "\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

void check(ll &mine,vector<ll>&temp,ll ck){
   int n=temp.size();
   if(temp[0]>=ck){
     mine=min(mine,min(ck,temp[0]-ck));
     return;
   }
   if(temp[n-1]<=ck){
     mine=min(mine,ck-temp[n-1]);
     return;
   }
   
   int low=0;
   int end=n-1;
   while(end-low>1){
    int mid=low + (end - low)/2;
    if(temp[mid]>=ck)end=mid;
    else if(temp[mid]<ck)low=mid;
   }
   mine=min(mine,min(ck-temp[low],temp[end]-ck));
}
void Harsh(){
    ll n,k;
    cin>>n>>k;
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    sort(all(temp));
    ll mini=LONG_LONG_MAX;
    for(ll i=0;i<n-1;i++){
       mini=min(mini,temp[i+1]-temp[i]);
    }
    if(k==1){
        cout<<min(mini,temp[0])<<endl;
        return;
    }
    mini=temp[0];
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
          check(mini,temp,temp[j]-temp[i]);
       }
       
    }
    cout<<mini<<endl;

}
int main()
{
    fast;
    ll t=1;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}