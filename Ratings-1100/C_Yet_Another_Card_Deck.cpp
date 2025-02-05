#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,q;
    cin>>n>>q;
    vector<int>a(51,-1);
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if(a[x]==-1)a[x]=i+1;
    }
    for(int j=0;j<q;j++){
       int x;
       cin>>x;
       cout<<a[x]<<" ";
       for(int i=1;i<=50;i++){
          if(a[i]!=-1 && a[i]<a[x])a[i]+=1;
       }
       a[x]=1;
       
    }
   
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Harsh();
    return 0;
}