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

int check(int ck,vector<int>alpha){
    int count1=0;
    int lasti=-1;
    int sum=0;
    int ans=0;
    for(int i=25;i>=0;i--){
        if(alpha[i]>ck){
            count1=count1+alpha[i]-ck;
            ans=ans+(alpha[i]-ck);
        }
        else if(alpha[i]<ck && count1>=(ck-alpha[i])){
            count1=count1-(ck-alpha[i]);
        }
        else if(alpha[i]<ck && count1<(ck-alpha[i])){
            if(lasti==-1)lasti=i;
            alpha[i]=alpha[i]+count1;
            count1=0;
            sum=sum+alpha[i];
        }
    }
    int tm=sum/ck;
    while(tm--){
        ans=ans+(ck-alpha[lasti--]);
    }
    return ans;
}

   
void Harsh(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
  
    vector<int>alpha(26,0);
    vector<vector<int>>order(26);
    for(int i=0;i<n;i++){
        alpha[s[i]-'a']++;
        order[s[i]-'a'].push_back(i);
    }
  
    sort(all(alpha));
    int ans=n;
    int val=-1;
    for(int i=1;i<=26;i++){
        if(n%i==0 ){
               int tp=check(n/i,alpha);
                if(ans>tp){
                    ans=tp;
                    val=n/i;
                }
        } 
    }
    iota(all(alpha), 0);    // intialize the order vector with numbers 0 to 25 (representing 'a' to 'z')
    
    // sort the characters by their frequencies in descending order
    sort(all(alpha), [&](int i, int j){
        return order[i].size() > order[j].size(); // sorting by the size of the frequency vector
    });
     string res=string(n,' ');
     vector<int>extra;
     for(int it=0;it<n/val;it++){
        int i = alpha[it];
        for(int j=0;j<val;j++){
            if(j < (int)order[i].size()){
                res[order[i][j]] = (char)('a' + i);    // assign the character to the corresponding positions
            }
            else{
                extra.push_back((char) ('a' + i));  // store the under-used characters
            }
        }
    }
                
    // fill remaining spaces in the result string with under-used characters
    for(char &c: res){
        if(c == ' '){
            c = extra.back();   // assign the extra char
            extra.pop_back();   // remove the character from the extra pool
        }
    }
   cout<<ans<<endl;
   cout<<res<<endl;
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