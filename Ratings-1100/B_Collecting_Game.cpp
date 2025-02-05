#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int n;
    cin>>n;
    vector<long long int>temp(n);
    vector<vector<long long int>>vec(n,vector<long long int>(3));
    for(long long int i=0;i<n;i++){
      cin>>vec[i][0];
      vec[i][1]=i;
    }
    sort(vec.begin(),vec.end());
    for(long long int i=0;i<n;i++){
       vec[i][2]=vec[i][0];
       if(i!=0)vec[i][2]+=vec[i-1][2];
    }
    temp[vec[n-1][1]]=n-1;
    int ck=n-1;
    for(long long int i=n-2;i>=0;i--){
        if(vec[i][2]<vec[i+1][0]){
            ck=i;
        }
        temp[vec[i][1]]=ck;
      
    }
    for(auto it:temp){
       cout<<it<<" " ;
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