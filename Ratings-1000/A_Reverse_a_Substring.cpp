#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=-1,r=-1;
    for(int i=1;i<n;i++){
       if(s[i]>=s[i-1])continue;
       else{
         cout<<"YES"<<endl;
         cout<<i<<" "<<i+1<<endl;
         return;
       }
    }
    cout<<"NO"<<endl;

   
}
int main()
{
    
     Harsh();

    return 0;
}