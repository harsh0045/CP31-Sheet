#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    vector<pair<int,int>>b(n);
    vector<pair<int,int>>c(n);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a[i].first=x;
      a[i].second=i;
    }
    for(int i=0;i<n;i++){
       int x;
      cin>>x;
      b[i].first=x;
      b[i].second=i;
    }
    for(int i=0;i<n;i++){
       int x;
      cin>>x;
      c[i].first=x;
      c[i].second=i;
    }
    sort(begin(a),end(a));
    sort(begin(b),end(b));
    sort(begin(c),end(c));

    int ans=0;
    for(int i=n-1;i>=n-3;i--){
       for(int j=n-1;j>=n-3;j--){
         if(a[i].second==b[j].second)continue;
         for(int k=n-1;k>=n-3;k--){
            if(a[i].second==c[k].second || c[k].second==b[j].second)continue;
            ans=max(ans,a[i].first+b[j].first+c[k].first);
         }  
       }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}