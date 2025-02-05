#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n;
    cin>>n;
    ll sum=0;
    ll mini=INT_MAX;
    bool zr=false;
    bool neg=false;
    for(ll i=0;i<n;i++){
       ll x;
       cin>>x;
       sum=sum+abs(x);
       mini=min(mini,abs(x));
       if(x==0)zr=true;
       if(x<0)neg=!neg;
    }
    if(zr || !neg )cout<<sum<<endl;
    else cout<<sum- 2*mini<<endl;

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