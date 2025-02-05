#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    ll n,k;
    cin>>n>>k;

    vector<ll>temp(n);
    vector<ll>mink;

    ll sum=0;
    for(ll i=0;i<n;i++){
      cin>>temp[i];
      sum+=temp[i];
    }
    sort(temp.begin(),temp.end());
    ll curr=0;
    ll ck=k;
    for(ll i=0;i<n;i++){
        curr=curr+ temp[i];
        if(i%2 && ck--)mink.push_back(curr);
        if(ck==0)break;
    }
    ll ans=sum-mink[k-1];
    curr=sum-mink[k-1];
    ll maxk=0;
    for(ll i=1;i<=k;i++){
       maxk=maxk+temp[n-i];
       if(i!=k)curr=sum-mink[k-i-1];
       else curr=sum;
       ans=max(ans,curr-maxk);
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