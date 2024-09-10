#include<bits/stdc++.h>
using namespace std;
int MOD= 1e9 + 7;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>temp(n);
        for(int i=0;i<n;i++)cin>>temp[i];
        bool flag=true;
        for(auto it:temp){
            if(it==k){cout<<"YES"<<endl; flag=false;break;}
        }
        if(flag)cout<<"NO"<<endl;
    }
    return 0;
}