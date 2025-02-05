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
    int n,m,q;
    cin>>n>>m>>q;
    int t1,t2;
    cin>>t1>>t2;
    int st;
    cin>>st;
    if(st==t1 || st==t2){
        cout<<0<<endl;
        return;
    }
    if(st>t1 && st>t2){
        int maxt=max(t1,t2);
        cout<<n-maxt<<endl;
    }else if(st<t1 && st<t2){
        int mint=min(t1,t2);
        cout<<mint-1<<endl;
    }else{
       int dif1=abs(st-t1);
       int dif2=abs(st-t2);
       if(dif1<dif2){
           int val=(dif2-dif1+1);
           if(val%2)val=val/2 + 1;
           else val=val/2;
          cout<<val + (dif1-1)<<endl;
       }else{
           int val=(dif1-dif2+1);
           if(val%2)val=val/2 + 1;
           else val=val/2;
          cout<<val + (dif2-1)<<endl;
       }

    }
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