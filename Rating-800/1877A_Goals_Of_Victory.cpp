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
        vector<int>temp(n-1);
        for(int i=0;i<n-1;i++)cin>>temp[i];
        int sum=0;
        for(auto it:temp)sum+=it;
        cout<<-sum<<endl;
    }
    return 0;
}