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
    vector<int>temp(n);
    bool count0=true;
    for(int i=0;i<n;i++){
      cin>>temp[i];
      if(temp[i]!=0)count0=false;
    }
    if(count0){
        cout<<"NO";
        nl;
        return;
    }
    sort(all(temp));
    ll dif=temp[n-1]-temp[0];
    cout<<"YES";
    nl;
    int i=0;
    int j=n-1;
    ll total=0;
    while(i<=j){
       ll totali=total+temp[i];
       ll totalj=total+temp[j];
       if(total<=0 ){
         if(abs(totali)<dif){
             total=totali;
            cout<<temp[i]<<" ";
            i++;
         }else {
            total=totalj;
            cout<<temp[j]<<" ";
            j--;
         }
       }else {
          if(abs(totalj)<dif){
             total=totalj;
            cout<<temp[j]<<" ";
            j--;
         }else {
            total=totali;
            cout<<temp[i]<<" ";
            i++;
         }
       }
    }
    nl;
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