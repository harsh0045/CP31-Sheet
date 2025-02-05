#include <bits/stdc++.h>
using namespace std;

#define pi (3.141592653589)
#define MOD 1000000007
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
const int N = 2e5 + 5;

ll mod_exp(ll base, ll exp, ll mod_value) {  // Renamed `mod` to `mod_value`
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod_value;
        base = (base * base) % mod_value;
        exp /= 2;
    }
    return result;
}

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, int& count) {
    visited[node] = true;
    count++;
    for (auto it : adj[node]) {
        if (!visited[it]) dfs(it, adj, visited, count);
    }
}

void Harsh() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> adj(n + 1);
    int x, y, z;
    for (int i = 0; i < n - 1; i++) {
        cin >> x >> y >> z;
        if (z == 0) {
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    }

    vector<bool> visited(n + 1, false);
    ll value = 0;
    for (int i = 1; i <= n; i++) {
        int count = 0;
        if (!visited[i] && adj[i].size() != 0) {
            dfs(i, adj, visited, count);
            value = (value + mod_exp(count , k, MOD) - count ) % MOD;
            if (value < 0) value += MOD;  // Ensure non-negative result
        }
    }

    ll result = (mod_exp(n, k, MOD) - value - n + MOD) % MOD;
    cout << result << endl;
}

int main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) {
        Harsh();
    }
    return 0;
}
