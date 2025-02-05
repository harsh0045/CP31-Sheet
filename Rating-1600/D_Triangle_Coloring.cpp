#include <bits/stdc++.h>
#define ll long long
#define MOD 998244353
using namespace std;

// Function to compute factorial modulo MOD
ll factorial(int n) {
    ll res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

// Function to compute modular exponentiation (a^b % mod)
ll mod_exp(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

// Function to compute modular inverse using Fermat's Little Theorem
ll mod_inverse(ll a, ll mod) {
    return mod_exp(a, mod - 2, mod);
}

// Function to compute binomial coefficient modulo MOD
ll comb(int n, int k) {
    if (k > n) return 0;
    ll num = factorial(n);           // n!
    ll denom = (factorial(k) * factorial(n - k)) % MOD; // k! * (n-k)!
    return (num * mod_inverse(denom, MOD)) % MOD;
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    ll ans = 1;

    // Process each triple
    for (int i = 0; i < n; i += 3) {
        vector<int> cur = {w[i], w[i + 1], w[i + 2]};
        int min_val = *min_element(cur.begin(), cur.end());
        int count_min = count(cur.begin(), cur.end(), min_val);
        ans = (ans * count_min) % MOD; // Multiply by the number of valid ways for the current triple
    }

    // Calculate the binomial coefficient comb(n/3, n/6)
    int a = n / 3;  // Total triples
    int b = n / 6;  // Number of triples to assign to one color
    ans = (ans * comb(a, b)) % MOD;

    // Output the result
    cout << ans << "\n";

    return 0;
}
