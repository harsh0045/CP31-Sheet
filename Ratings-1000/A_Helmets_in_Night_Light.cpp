#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int, int>& x, const pair<int, int>& y) {
    if (x.second == y.second)
        return x.first > y.first;  // If second elements are the same, sort by first element in descending order
    return x.second < y.second;    // Otherwise, sort by second element in ascending order
}
void Harsh(){
    int n,p;
    cin>>n>>p;
    vector<int>a(n);
    vector<pair<int,int>>b(n);
    long long int count=p;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      b[i].first=a[i];
      cin>>b[i].second;
    }
    sort(b.begin(),b.end(),cmp);
    int ck=0;
    for(int i=0;i<n;i++){
        int f=b[i].first;
        int s=b[i].second;
       if(s<=p && ck<n-1){
           int ct=min(n-1-ck,f);
           ck+=ct;
           count=count + (long long)ct*s;
       }else break;
    }
    
    cout<<count +(long long)(n-1-ck)*p<<endl;
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