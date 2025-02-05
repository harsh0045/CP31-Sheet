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
#define nl <<"\n"
#define cn(x) cin>>x;
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

vector<vector<string>>dp(11);
void helper(int ind,string s,int sum){
   if(ind==10){
      dp[sum].push_back(s);
      return;
   }
   s.push_back('1');
   helper(ind+1,s,sum+1);
   s.pop_back();
   s.push_back('0');
   helper(ind+1,s,sum);
}
void Harsh(){
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    string temp;
    unordered_set<char>st;
    for(auto it:a)st.insert(it);
    for(auto it:st)temp.push_back(it);
    int nt=temp.size();
    k=min(nt,k);
    ll ans=0;
    for(auto it:dp[k]){
        set<char>s;
        int count=0;
        for(int i=0;i<nt;i++){
            if(it[i]=='1'){
              s.insert(temp[i]);
              count++;
            }
           
        }
        if(count==k){
            ll sum=0;
            ll curr=0;
            for(int i=0;i<n;i++){
                if(a[i]==b[i]){
                    curr++;
                }
                else if(a[i]!=b[i] && s.find(a[i])!=s.end()){
                    curr++;
                }else{
                    sum=sum+((curr)*(curr+1))/2;
                    curr=0;
                }
            }
            if(curr!=0)sum=sum+((curr)*(curr+1))/2;
            ans=max(ans,sum);
        }
        
    }
  
    cout<<ans<<endl;

}
int main()
{
    fast;
    string s;
    helper(0,s,0);
    
    int t=1;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}