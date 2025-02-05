#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    string s;
    cin>>s;
    int n=s.size();
    string temp;
    vector<int>alpha(26,0);
    for(int i=0;i<n;i++){
      if(alpha[s[i]-'a'])break;
      else {
        temp.push_back(s[i]);
        alpha[s[i]-'a']=1;
      }
    }
    int t=temp.size();
    int count =n/t;
    int rem=n%t;
    int j=0;
    string ans="";
    while(count--)ans+=temp;
    while(rem--){ans+=temp[j++];}
    if(ans==s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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