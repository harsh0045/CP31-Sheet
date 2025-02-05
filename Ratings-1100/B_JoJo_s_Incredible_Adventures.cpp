#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    string s;
    cin>>s;
    ll n=s.size();
    ll i=0;
    while(i<n && s[i]=='1')i++;
    if(i==n){
        cout<<n*n<<endl;
        return;
    }
    
    ll count=0;
    ll res=0;
    for(ll j=0;j<n;j++){
       if(s[i]=='1')count++;
       else {
         if(count!=0){
           ll first=count/2;
           ll second=count-first;
           res=max(res,(first+1)*second);
           count=0;
         }
       }
       i=(i+1)%n;
    }
     if(count!=0){
           ll first=count/2;
           ll second=count-first;
           res=max(res,(first+1)*second);
     }
  
    cout<<res<<endl; 
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