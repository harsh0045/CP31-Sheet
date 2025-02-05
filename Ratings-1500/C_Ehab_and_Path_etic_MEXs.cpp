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

vector<int> v[100005];
int ans[100005];

void Harsh() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        v[a].push_back(i);
        v[b].push_back(i);
        ans[i] = -1;
    }

    pair<int, int> mx(0, 0);
    for (int i = 1; i <= n; i++) {
        mx = max(mx, make_pair((int)v[i].size(), i));
    }

    int cur = 0;
    for (int i : v[mx.second]) {
        ans[i] = cur++;
    }

    for (int i = 1; i < n; i++) {
        if (ans[i] == -1) {
            ans[i] = cur++;
        }
        printf("%d\n", ans[i]);
    }
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
         Harsh();
    }
 
    return 0;
}
