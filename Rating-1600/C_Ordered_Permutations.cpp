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

string getKthPermutation(int n, int k) {
    vector<int> numbers; // List of numbers to pick from
    vector<int> factorial(n, 1); // Precompute factorials


    for (int i = 1; i <= n; i++) {
        numbers.push_back(i);
    }

 
    for (int i = 1; i < n; i++) {
        factorial[i] = factorial[i - 1] * i;
    }

    k--; 
    string result = "";

    
    for (int i = n; i > 0; i--) {
        int fact = factorial[i - 1];
        int index = k / fact;  
        result += to_string(numbers[index]); 
        numbers.erase(numbers.begin() + index); 
        k %= fact; 
    }

    return result;
}
void Harsh(){
    int n,k;
    cin>>n>>k;
    string s=getKthPermutation(n,k);
    ll sum=0;
    for(int i=0;i<n;i++){
        int mine=s[i]-'0';
        for(int j=i;j<n;j++){
            sum = sum + min(mine,s[j]-'0');
        }
    }
    cout<<sum<<endl;
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