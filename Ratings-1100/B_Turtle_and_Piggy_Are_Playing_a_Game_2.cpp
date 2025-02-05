#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    
    cout<<temp[n/2]<<endl;
    
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