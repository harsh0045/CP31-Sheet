#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n,m;
    cin>>n>>m;
    vector<int>temp[m];
    for(ll i=0;i<n;i++){
      for(int j=0;j<m;j++){
          int x;
          cin>>x;
          temp[j].push_back(x);
      }
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    for(ll i=0;i<m;i++){
       sort(temp[i].begin(),temp[i].end());
      for(ll j=0;j<n;j++){
        ans= ans + (temp[i][j]*j)-(temp[i][j]*(n-1-j));
      }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}