#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<long long int>a(2*n+1,0);
    vector<long long int>b(2*n+1,0);
    long long int count=0;
    int prev=-1;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(prev!=x){
        if(prev!=-1){
            a[prev]=max(count,a[prev]);
        }
        prev=x;
        count=1;
      }else count++;
      
    }
    if(prev!=-1)a[prev]=max(count,a[prev]);
    prev=-1;
    count=0;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(prev!=x){
        if(prev!=-1){
            b[prev]=max(count,b[prev]);
        }
        prev=x;
        count=1;
      }else count++;
      
    }
    if(prev!=-1)b[prev]=max(count,b[prev]);
    long long int ans=0;
    for(int i=0;i<=2*n;i++){
        ans=max(ans,a[i]+b[i]);
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