#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int n;
    cin>>n;
  
    vector<long long int>temp(n);
    for(long long int i=0;i<n;i++){
       cin>>temp[i];
    }
    vector<long long int>tempk;
    for(int k=1;k*k<=n;k++){
       if(n%k==0){
        tempk.push_back(k);
        if(k!=n/k)tempk.push_back(n/k);
       }
    }
    long long int ans=0;
    for(int i=0;i<tempk.size();i++){
       int k=tempk[i];
       int j=0;
       long long int s=0;
       while(j<k){
         s+=temp[j++];
       }
       long long int mini=s;
       long long int maxi=s;
       while(j<n){
          int count=k;
          long long int sum=0;
          while(count--){
             sum+=temp[j++];
          }
          mini=min(mini,sum);
          maxi=max(maxi,sum);
       }
       ans=max(ans,maxi-mini);
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