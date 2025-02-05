#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll calcn(ll n){
    return (n*(n+1))/2;
}
void Harsh(){
    ll n,x,y;
    cin>>n>>x>>y;
   
    ll count1= n/x;
    ll count2=n/y;
    ll lcm=(x*y)/__gcd(x,y);
    ll countc=n/lcm;
    count1=count1-countc;
    count2=count2-countc;
    ll ans= calcn(n)-calcn(n-count1)-calcn(count2);
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