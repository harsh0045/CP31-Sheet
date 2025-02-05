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

ll f[1420][1420];
void Harsh(){
    int x;
	cin>>x;
	for(int i=1;i<=1414;i++){
		if(x<=i){
			cout<<f[i][x];
            nl;
			break;
		}
		x-=i;
	}
    
}
int main()
{
    fast;
    ll p=2;
	f[1][1]=1;
	for(int i=1;i<=1414;i++){
		for(int j=1;j<=i;j++){
			if(i==1 && j==1)continue;
			f[i][j]=f[i-1][j]+f[i-1][j-1]+p*p-f[i-2][j-1];
			p++;
		}
	}
    int t=1;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}