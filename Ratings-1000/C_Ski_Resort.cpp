#include<bits/stdc++.h>
using namespace std;

void Harsh(){
    int n,k,q;
    cin>>n>>k>>q;
    long long int count=0;
    long long int ans=0;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x<=q){
         if(count!=0)count++;
         else count=1;
      }else{
          if(count>=k){
              ans= ans+(count-k+1)*(count+1)-(count*(count+1))/2 + (k*(k-1))/2;
          }
          count=0; 
      }

    }
    if(count>=k)ans= ans+(count-k+1)*(count+1)-(count*(count+1))/2 + (k*(k-1))/2;
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