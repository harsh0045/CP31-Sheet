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

bool isPerfectSquare(int num) {
    if (num < 0) return false;  // Negative numbers can't be perfect squares

    int root = sqrt(num);  // Calculate the square root of the number
    return (root * root == num);  // Check if the square of the root equals the original number
}

void Harsh(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    if(!isPerfectSquare(n)){cout<<"NO"<<endl;return;}

    string t1;
    string t2;
    for(int i=1;i<=sqrt(n);i++){
       t1.push_back('1');
    }
    t2.push_back('1');
    for(int i=1;i<=sqrt(n)-2;i++){
       t2.push_back('0');
    }
    t2.push_back('1');
    string nt;
    for(int i=1;i<=sqrt(n);i++){
       if(i==1 || i==sqrt(n))nt+=t1;
       else nt+=t2;
    }
    if(nt==s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}