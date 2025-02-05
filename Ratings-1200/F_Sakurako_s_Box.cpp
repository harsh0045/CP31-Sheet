#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long harsh_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0, sumsq = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum = (sum + a[i]) % MOD;
        sumsq = (sumsq + a[i] * a[i]) % MOD;
    }

    long long sump = (sum * sum - sumsq + MOD) % MOD;
    sump = (sump * harsh_pow(2, MOD - 2, MOD)) % MOD;

    long long tp = (n * (n - 1) / 2) % MOD;

    long long tpi = harsh_pow(tp, MOD - 2, MOD);

    long long result = (sump * tpi) % MOD;
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}