#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>temp(n);
        for(int i=0;i<n;i++)cin>>temp[i];

        
        int ans=temp[0];
        for(int i=1;i<n;i++){
            int num=temp[i]-temp[i-1];
            ans=max(num,ans);
        }
        int last=2*(x-temp[n-1]);
        ans=max(ans,last);
        cout<<ans<<endl;

    }
}