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
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
  
    int count=0;
    int lastc=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            count++;
            lastc=i;
        }
    }
    if(count==n){cout<<0<<endl;return;}
    bool ck=true;
    for(int i=lastc+1;i<n;i++){
        if((i+1)%(lastc+1)==0 && s[i]!=c)ck=false;
    }
    if(ck==true){
        cout<<1<<endl;
        cout<<lastc+1<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
    }
}
    
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}