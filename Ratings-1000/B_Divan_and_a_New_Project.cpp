#include<bits/stdc++.h>
using namespace std;

void Harsh(){
    long long int n;
    cin>>n;
    vector<pair<long long int,long long int>>temp(n);
    for(long long int i=0;i<n;i++){
      cin>>temp[i].first;
      temp[i].second=i+1;
    }
    sort(temp.rbegin(),temp.rend());
    vector<long long int>ans(n+1,0);
    long long int j=1;
    long long int walkm=0;
    for(long long int count=1;count<=n;j++){
       ans[temp[count-1].second]=j;
       walkm = walkm + j*(temp[count-1].first);
       count++;
       if(count <=n){ans[temp[count-1].second]=-j;  walkm = walkm + j*(temp[count-1].first); count++;}
    }
    cout<<2*walkm<<endl;
    for(auto it:ans)cout<<it<<" ";
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