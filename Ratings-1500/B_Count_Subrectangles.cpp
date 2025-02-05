#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll solve(vector<ll> &a, ll k){
    ll n = a.size();
    ll i = 0, j = 0, cnt = 0, sum = 0;
    while(j < n){
        sum += a[j];
        while(j-i+1 > k){
            if(a[i] == 1) sum--;
            i++;
        }
        if(j-i+1 == k){
            if(sum == k) cnt++;
        }
        j++;
    }
    return cnt;
}
 
 int main() {
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> row(n);
    vector<ll> col(m);
    for(ll i=0; i<n; i++) cin>>row[i];
    for(ll i=0; i<m; i++) cin>>col[i];
    ll ans = 0;
    for(ll i=1; i*i<=k; i++){
        if(k%i == 0){
            ans += solve(row, i)*solve(col, k/i);
            if(i != k/i) ans += solve(row, k/i)*solve(col, i);
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
