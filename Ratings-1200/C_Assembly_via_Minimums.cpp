#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    ll sz=(n*(n-1))/2;
    vector<ll>temp(sz);
    for(ll i=0;i<sz;i++){
      cin>>temp[i];
    }
    sort(begin(temp),end(temp));
    
    ll j=0;
    for(ll i=n-1;i>=1;i--){
       cout<<temp[j]<<" ";
       j+=i;
    }
    cout<<temp[sz-1]<<endl;
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