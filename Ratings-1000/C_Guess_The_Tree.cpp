
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(c) c.begin(), c.end()
#define f first
#define s second
 
#define ll int
 
ll que(ll a, ll b) {
	printf("? %d %d\n", a, b); 
	ll x; scanf("%d", &x);
	return x;
}
 
void foo() {
	ll n; scanf("%d", &n);
	vector<pair<ll, ll>> ans;
	for (ll i = 2; i <= n; ++i) {
		ll p = 1;
		ll ret = que(i, p);
		while (ret != i) {
			p = ret;
			ret = que(i, p);
		}
		ans.pb({i, p});
	}
	printf("! ");
	for (auto &e: ans) printf("%d %d ", e.f, e.s);
	puts(""); 
}
 
int main() {
	int t; scanf("%d", &t);
 
	/*
	int t69  = 1;
	*/
 
	while (t --) foo();
	return 0;
}