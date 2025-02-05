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
    string s;
    cin>>s;
    vector<int>temp(n);
    stack<char>st;
    int i=0;

   
    bool one=false;
    bool two=false;
    int col=1;
    int ind=0;
    while(i<n){
        if(s[i]=='('){
           if(st.empty()){
            st.push('(');
            if(two){
              if(col==0 || col==2)col=1;
              else col=2;
            }
            one=true;
            two=false;
            }
           else{
              if(st.top()=='(')st.push('(');
              else {
                st.pop();
              }
           }
        }else{
           if(st.empty()){
            st.push(')');
            if(one){
                if(col==0 || col==2)col=1;
                else col=2;
            }
            two=true;
            one=false;
            }
           else{
              if(st.top()=='(')st.pop();
              else st.push(')');
           } 
        }
        ind=max(ind,col);
        temp[i]=col;
        i++;
    }
    if(st.size()!=0){
        cout<<-1<<endl;
        return;
    }
 
    cout<<ind<<endl;
    for(int i=0;i<n;i++){
       cout<<temp[i]<<" ";
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