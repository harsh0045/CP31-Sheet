#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    int j=0;
    vector<int>temp;
    for(int i=n-1;i>=0;i--){
       temp.push_back(i);
       if(temp.size()<n && (i &(i-1))==0)temp.push_back(j++);
       if(temp.size()==n)break;
    }
    for(int i=0;i<n;i++){
      cout<<temp[i]<<" ";
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