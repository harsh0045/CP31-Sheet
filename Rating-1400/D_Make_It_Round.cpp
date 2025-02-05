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


void Harsh(){
      int n,m;
        cin >> n >> m;

        int original_n = n;
        int count_twos = 0, count_fives = 0;

        
        while (true) {
            if (n % 2 == 0) {
                n /= 2;
                count_twos++;
            } else if (n % 5 == 0) {
                n /= 5;
                count_fives++;
            } else {
                break;
            }
        }

        ll multiplier = 1;
        if (count_twos < count_fives) {
            int difference = count_fives - count_twos;
            while (difference > 0) {
                if (multiplier * 2 > m)
                    break;
                count_twos++;
                difference--;
                multiplier *= 2;
            }
        } else if (count_twos > count_fives) {
            int difference = count_twos - count_fives;
            while (difference > 0) {
                if (multiplier * 5 > m)
                    break;
                count_fives++;
                difference--;
                multiplier *= 5;
            }
        }
        while (multiplier * 10 <= m) {
            multiplier *= 10;
        }

        multiplier = multiplier * (m / multiplier);
        cout << original_n * multiplier << endl;
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