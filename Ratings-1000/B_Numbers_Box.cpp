#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,m;
    cin>>n>>m;
    long long int sum=0;
    bool od=false;
    bool zr=false;
    int mini=INT_MAX;
    
    for(int i=0;i<n;i++){

       for(int j=0;j<m;j++){
          int x;
          cin>>x;
          
          sum=sum + abs(x);
          mini=min(mini,abs(x));
          if(x<0)od=!od;
          if(x==0)zr=true;
       }
    }
    if(zr || !od)cout<<sum<<endl;
    else cout<<sum-2*mini<<endl;
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