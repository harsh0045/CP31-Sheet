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
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
   vector<pair<int,int>>ans;
   vector<int>t;
   for(int i=0;i<n;i++){
    if(temp[i]==0){

    }
   }
    int i=0;
    int mid=0;
    int j=n-1;
    
    while(mid<=j){
        if(temp[i]==0){
            i++;
            mid++;
            continue;
        }
        if(temp[j]==2){
            j--;
            continue;
        }
        if(temp[mid]==2 ){
            if(temp[j]==0 && temp[i]==1){
                ans.push_back({i+1,j+1});
                temp[i]=0;
                temp[j]=1;
                i++;
            }else if(temp[j]==0 && temp[i]!=1){
                int tp=mid;
                while(tp<=j && temp[tp]!=1)tp++;
                ans.push_back({i+1,tp+1});
                temp[i]=1;
                temp[tp]=2;
                mid++;
            }else {
                ans.push_back({mid+1,j+1});
                temp[mid]=1;
                temp[j]=2;
                mid++;
                j--;
            }
        
        }
        else if(temp[mid]==0){
            temp[i]=0;
            temp[mid]=1;
            ans.push_back({i+1,mid+1});
            i++;
            mid++;
        }
        else if(temp[mid]==1){
            mid++;
            continue;
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
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