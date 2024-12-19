#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    string s;
    cin>>s;
    int count0=0;
    int count1=0;
    for(auto it:s){
      if(it=='1')count1++;
      else count0++;
    }
    string t;
    for(auto it:s){
        if(count0 && it=='1'){t+='0';count0--;}
        else if(count1 && it=='0'){t+='1';count1--;}
        else t+=it;
        
    }
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==t[i]){cout<<n-i<<endl;return;}
    }
    cout<<0<<endl;
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