#include<bits/stdc++.h>
using namespace std;

void Harsh(){
    int n;
    cin>>n;
    
    bool od=false;
    int currsum=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if(abs(x)%2 && !od){
           od=true;
           currsum=max(x,currsum+x);
       }else if(!(abs(x)%2) && od){
           od=false;
           currsum=max(x,currsum+x);
       }else{
         currsum=x;
         if(abs(x)%2)od=true;
         else od=false;
       }
       ans=max(ans,currsum);
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