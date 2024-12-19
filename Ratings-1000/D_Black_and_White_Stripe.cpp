#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    int count=0;
    int mini=INT_MAX;
    for(int i=0;i<k;i++){
       if(s[i]=='W')count++;
    }
    mini=min(mini,count);
    for(int i=k;i<n;i++){
       if(s[i-k]=='W')count--;
       if(s[i]=='W')count++;
       mini=min(mini,count);
    }
    cout<<mini<<endl;

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