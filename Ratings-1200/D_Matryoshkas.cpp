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
    sort(begin(temp),end(temp));
    ll ans=0;
    ll common=0;
    int i=1;
    while(1){
       ll count=1;
       while(i<n && temp[i]==temp[i-1]){
           count++;
           i++;
       }
       if(count>common) ans=ans+count-common;
       if(i>=n)break;
       if(i==n-1 && temp[i]!=temp[i-1]+1 ){ans++;break;}
       else if(i==n-1 && temp[i]==temp[i-1]+1)break;
       if(temp[i]==temp[i-1]+1)
        common=count;
       else common=0;
       i++;
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}

