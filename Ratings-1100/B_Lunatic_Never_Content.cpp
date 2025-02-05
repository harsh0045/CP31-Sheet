#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    vector<ll>temp(n);
    for(ll i=0;i<n;i++){
      cin>>temp[i];
    }
    ll x=0;
    ll y=n-1;
    ll prev=-1;
    while(x<y){
        ll dif=abs(temp[x]-temp[y]);
        if(!dif){x++;y--;continue;}
        if(prev==-1)prev=dif;
        else{
           prev=__gcd(prev,dif);
        }
        x++;
        y--;
    }
    if(prev==-1)cout<<0<<endl;
    else cout<<prev<<endl;

    
}
 int main()
{
    long long int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}