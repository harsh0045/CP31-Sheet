#include<bits/stdc++.h>
using namespace std;
int MOD= 1e9 + 7;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int count=0;
        bool flag=false;
        while(true){
            bool isFound = x.find(s) != string::npos;
            if(isFound){
                cout<<count<<endl;
                break;
            }
            if(flag){cout<<-1<<endl;break;}
            if(x.size()>s.size())flag=true;
            x+=x;
            count++;
            
        }
    }
    return 0;
}