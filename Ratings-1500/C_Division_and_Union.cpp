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
    int n;
    cin>>n;

    vector<vector<int>>st;
    int x,y;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      st.push_back({x,y,i});
    }
    sort(all(st));
    bool ans=false;
    int ck=st[0][1];
    st[0].push_back(1);
    for(int i=1;i<n;i++){
       int curr=st[i][0];
       if(ans){
            st[i].push_back(2);
       }else if(curr<=ck) {
             st[i].push_back(1);
       }else if(curr>ck){
             ans=true;
             st[i].push_back(2);
       }

       ck=max(st[i][1],ck);
    }
    if(!ans){
        cout<<-1<<endl;
        return;
    }
      sort(st.begin(), st.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2]; // Compare the third elements
       });

    for(auto it:st){
        cout<<it[3]<<" ";
    }
    cout<<endl;
   
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