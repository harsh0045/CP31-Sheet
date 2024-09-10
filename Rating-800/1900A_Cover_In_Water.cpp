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
        string s;
        cin>>s;
        int count=0;
        int total=0;
        for(auto it:s){
            if(it=='#'){
                total+=count;
                count=0;
            }
            else count++;
            if(count>=3){cout<<2<<endl;break;}
        }
        if(count<3)cout<<total+count<<endl;

    }
    return 0;
}