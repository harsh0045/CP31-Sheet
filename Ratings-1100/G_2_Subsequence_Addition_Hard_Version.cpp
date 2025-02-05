#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    ll sum=0;
    for(ll i=0;i<n;i++){
      if((i==0 && temp[i]!=1)||(i!=0 && sum<temp[i])){
        cout<<"NO"<<endl;
        return;
      }
      sum+=temp[i]; 
    }
    cout<<"YES"<<endl;
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