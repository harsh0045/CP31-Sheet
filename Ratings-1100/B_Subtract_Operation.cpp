#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,k;
    cin>>n>>k;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
   sort(begin(temp),end(temp));
   for(int i=0;i<n-1;i++){
     if(binary_search(temp.begin()+i+1,temp.end(),temp[i]+k)){
         cout<<"YES"<<endl;
         return;
     }
   }
   cout<<"NO"<<endl;
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