#include <bits/stdc++.h>
using namespace std;

#define pi (3.141592653589)
#define modulo 1000000007
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

const int  N = 2e5 + 5 ;

long long modulo_exp(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % modulo;
        }
        base = (base * base) % modulo;
        exp /= 2;
    }
    return result;
}

// Function to calculate factorial % modulo
long long factorial_modulo(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = (result * i) % modulo;
    }
    return result;
}

// Function to calculate nCr % modulo
long long nCr_modulo(int n, int r) {
    if (r > n) return 0;
    long long fact_n = factorial_modulo(n);
    long long fact_r = factorial_modulo(r);
    long long fact_n_r = factorial_modulo(n - r);
    
    // Using Fermat's Little Theorem for moduloular inverse
    long long denominator = (fact_r * fact_n_r) % modulo;
    long long denominator_inv = modulo_exp(denominator, modulo - 2);

    return (fact_n * denominator_inv) % modulo;
}


void Harsh(){
    int n;
    cin>>n;
    int sum=INT_MAX;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
      sum=sum&temp[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
      if(sum==temp[i]) count++;
    }
    if(count<2){
        cout<<0<<endl;
        return;
    }
    cout<<(factorial_modulo(n-2)*2*nCr_modulo(count,2))%modulo<<endl;

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