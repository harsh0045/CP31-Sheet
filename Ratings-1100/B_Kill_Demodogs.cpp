#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll MOD = 1e9+7;

// Function to compute (a * b) % MOD safely without overflow
ll mod_mult(ll a, ll b) {
    return (a % MOD) * (b % MOD) % MOD;
}

// Function to compute the sum of squares modulo MOD
ll calc2(ll n) {
    return mod_mult(mod_mult(n, (n + 1)), (2 * n + 1)) * 166666668 % MOD; // 166666668 is the modular multiplicative inverse of 6 under MOD (1/6 % MOD)
}

// Function to compute the sum of first n natural numbers modulo MOD
ll calc(ll n) {
    return mod_mult(n, (n + 1)) * 500000004 % MOD; // 500000004 is the modular multiplicative inverse of 2 under MOD (1/2 % MOD)
}

void Harsh() {
    ll n;
    cin >> n;
    ll result = mod_mult((2 * calc2(n - 1) + calc(n - 1) + mod_mult(n, n)) % MOD, 2022);
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Harsh();
    }
    return 0;
}

// ll mod_exp(ll base, ll exp, ll mod) {
//     ll result = 1;
//     while (exp > 0) {
//         if (exp % 2 == 1) { // If exp is odd, multiply base with the result
//             result = (result * base) % mod;
//         }
//         base = (base * base) % mod; // Square the base
//         exp = exp / 2; // Reduce the exponent by half
//     }
//     return result;
// }

// // Function to find the modular multiplicative inverse of 'a' under modulo 'MOD'
// ll mod_inverse(ll a, ll mod) {
//     return mod_exp(a, mod - 2, mod);
// }

