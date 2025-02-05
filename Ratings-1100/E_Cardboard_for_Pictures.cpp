#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll isPossible(ll w , ll c , vector<ll>temp){
    
    for(auto it:temp){
        c=c-(it+2*w)*(it+2*w);
        if(c<0)return 1;
    }
    if(c>0)return -1;
    else return 0;
}
void Harsh(){
    ll n,c;
    cin>>n>>c;
    vector<ll>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    
    ll low=1;
    ll high =1e9;
    while(low<=high){
       ll w=low + (high - low)/2;
       ll check =isPossible(w,c,temp);
       if(check==0){
           low=w;
           break;
       }else if(check==1){
          high=w-1;
       }else{
           low=w+1;
       }
    }
    cout<<low<<endl;
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