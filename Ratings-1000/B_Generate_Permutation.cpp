#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    if(n%2==0)cout<<-1<<endl;
    else{
       int count=n/2;
       for(int i=0;i<n/2;i++){
          cout<<n-i<<" ";
       }
       for(int i=1;i<=(n/2)+1;i++){
          cout<<i<<" ";
       }
       cout<<endl;
    }

    
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