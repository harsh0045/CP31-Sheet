#include<bits/stdc++.h>
using namespace std;
bool cmp(const vector<int>&a,const vector<int>&b){
    if(a[2]==b[2])return a[1]<b[1];
    return a[2]>b[2];
}
void Harsh(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>temp(n,vector<int>(3));
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      temp[i][0]=x;
      if(x%k==0)temp[i][2]=k;
      else temp[i][2]=x%k;
      temp[i][1]=i+1;
    }
    sort(temp.begin(),temp.end(),cmp);
    int count=0;
    for(auto it:temp){
       cout<<it[1]<<" ";
    }
    cout<<endl;
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