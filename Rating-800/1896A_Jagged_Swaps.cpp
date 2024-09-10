#include<bits/stdc++.h>
using namespace std;
int MOD= 1e9 + 7;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>temp(n);
        for(int i=0;i<n;i++)cin>>temp[i];
        if(temp[0]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}