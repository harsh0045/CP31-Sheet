#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    int ans=-1;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(i!=x){
        if(ans==-1)ans=x;
        else{
          ans=ans&x;
        }
      }
     
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