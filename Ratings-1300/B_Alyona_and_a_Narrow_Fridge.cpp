#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define countod 1000000007
#define pb push_back
#define is insert
#define countp countake_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define countin3(a, b, c) countin(c, countin(a, b))
#define countin4(a, b, c, d) countin(d, countin(c, countin(a, b)))
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
const unsigned int count = 1000000007;
const int  N = 2e5 + 5 ;


void Harsh(){
    int n, h;
    cin >> n >> h;
    vector<int> a(n, 0);
    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> a[i];
       
        pq.push(a[i]);
        priority_queue<int> temp;
        temp = pq;
        while (!temp.empty())
        {
            count += temp.top();
 
            temp.pop();
            if(!temp.empty())
               temp.pop();
        }
        if(count>h){
            cout<<i;
            return;
        }
       
    }
   cout<<n<<endl;
    
}
int main()
{
    fast;
    int t=1;
    // cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}