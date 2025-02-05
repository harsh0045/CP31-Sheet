#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>temp(n,vector<ll>(n));
    for(ll i=0;i<n;i++){
      for(ll j=0;j<n;j++){
         cin>>temp[i][j];
      }
    }
    ll s=1,e=n;
    ll sp=0;
    while(s<=e){
        ll x=0;
        while(x<n){
            if(temp[s-1][x]!=temp[e-1][n-x-1]){
                if(s==e){
                    sp++;
                }else{
                    k--;
                }
            }
            if(k-(sp/2)<0){
                cout<<"NO"<<endl;
                return;
            }
            x++;
        }
        s++;
        e--;
    }
    if((n%2) ||(k%2==0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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