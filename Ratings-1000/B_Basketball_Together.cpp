#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,d;
    cin>>n>>d;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    int count=0;
    int i=n-1;
    while(i>=0){
        count += (d/temp[i])+1;
        if(count>=n)break;
        i--;
    }
    int ans= n-i;
    if(count>n)ans--;
    cout<<ans<<endl;
}  
int main()
{
   
    Harsh();
    
    return 0;
}