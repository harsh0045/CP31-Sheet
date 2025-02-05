#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int n,k;
    cin>>n>>k;
    
    vector<long long int>a(n);
    for(long long int i=0;i<n;i++){
      cin>>a[i];
    }
    long long int maxib=0;

    long long int ans=0, sum=0;
    for(long long int i=0;i<n;i++){
       long long int x;
       cin>>x;
       maxib=max(maxib,x);
       if((k-1)>=0){
        sum+=a[i];
        k--;
        ans=max(ans,sum+k*maxib);
       }

    }
    cout<<ans<<endl;

}
 int main()
{
    long long int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}