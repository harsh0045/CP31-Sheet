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
        if(k==1 && !is_sorted(temp.begin(),temp.end()))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    return 0;
}