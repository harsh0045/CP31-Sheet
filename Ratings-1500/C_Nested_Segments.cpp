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

static bool cmp(const vector<int>&a,const vector<int>&b){
    if(a[0]!=b[0])return a[0]<b[0];
    else return a[1]>b[1];
}
void Harsh(){
    int n;
    cin>>n;
    
    vector<vector<int>>temp(n,vector<int>(3));
    for(int i=0;i<n;i++){
      cin>>temp[i][0]>>temp[i][1];
      temp[i][2]=i+1;
    }
    sort(temp.begin(),temp.end(),cmp);
    int maxi=temp[0][1];
    int ind=temp[0][2];
    for(int i=1;i<n;i++){
        int ck=temp[i][1];
        if(ck<=maxi){
            cout<<temp[i][2]<<" "<<ind;
            return;
        }else{
            maxi=ck;
            ind=temp[i][2];
        }
    }
    cout<<-1<<" "<<-1<<"\n";
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