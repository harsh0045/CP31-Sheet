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

int query(int i, int j){
    cout<<"? "<<i<<" "<<j<<endl;
    fflush(stdout);
    int k;
    cin>>k;
    if(cin.fail())
        exit(0);
    return k;
}
void Harsh(){
    vector<int>temp={4,8,15,16,23,42};
    vector<int>tmp(6,0);
    unordered_map<int,pair<int,int>>umap;
    for(int i=0;i<6;i++){
      for(int j=i+1;j<6;j++){
          umap[temp[i]*temp[j]]={temp[i],temp[j]};
      } 
    }
    
    int input1=query(1,6);
    int input2=query(1,5);
   
    if(umap[input1].first==umap[input2].first){
         tmp[5]=umap[input1].second;
         tmp[4]=umap[input2].second;
         tmp[0]=umap[input1].first;
    }else if(umap[input1].first==umap[input2].second){
         tmp[5]=umap[input1].second;
         tmp[4]=umap[input2].first;
         tmp[0]=umap[input1].first;
    }else if(umap[input1].second==umap[input2].first){
         tmp[5]=umap[input1].first;
         tmp[4]=umap[input2].second;
         tmp[0]=umap[input1].second;
    }else{
         tmp[5]=umap[input1].first;
         tmp[4]=umap[input2].first;
         tmp[0]=umap[input1].second;
    }
    for(int i=4;i>=3;i--){
       int input=query(1,i);
       if(umap[input].first==tmp[0]){
         tmp[i-1]=umap[input].second;
       }else{
          tmp[i-1]=umap[input].first;
       }
    }
    int xr=0;
    for(int i=0;i<6;i++){
       xr=xr^temp[i];
       xr=xr^tmp[i];
    }
    tmp[1]=xr;
    cout<<"! ";
    for(int i=0;i<6;i++){
       cout<<tmp[i]<<" ";
    }

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