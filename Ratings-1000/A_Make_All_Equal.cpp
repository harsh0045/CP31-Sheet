#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<int>temp(n+1);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      temp[x]++;
    }
    int cm=0;
    for(auto it:temp){
       cm=max(cm,it);
    }
    cout<<n-cm<<endl;
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