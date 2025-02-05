#include<bits/stdc++.h>
using namespace std;

void Harsh(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<bool>temp(26,0);
    int ans=0;
    for(int i=0;i<n;i++){
      if(!temp[s[i]-'a']){
        temp[s[i]-'a']=1;
        ans+=n-i;
      }
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