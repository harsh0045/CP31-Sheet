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
        
        
        int first=temp[0];
        int second=-1;
        for(int i=1;i<n;i++){
            if(temp[i]!=first){second=temp[i];break;}
        }
        int count=1;
        bool flag=false;
        for(int i=1;i<n;i++){
            if(temp[i]==first)count++;
            else if(temp[i]==second)count--;
            else {flag=true; break;}
        }
        if(flag) cout<<"No"<<endl;
        else if(count==n || abs(count)<=1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}