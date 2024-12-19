#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    if(c=='g'){cout<<0<<endl;return;}
    for(int i=0;i<n;i++){
       s.push_back(s[i]);
    }
    bool prev=false;
    int count=-1;
    int ans=1;
    for(auto it:s){
         if(c==it){
            if(prev){
                count++;
            }else{
                prev=true;
                count=0;
            }
         }else{
            if(prev){
               count++;
               if(it=='g'){
                 ans=max(ans,count);
                 count=-1;
                 prev=false;
               }
            }
         }
    }
    cout<<ans<<endl;

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