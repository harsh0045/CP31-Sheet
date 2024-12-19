#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,r,b;
    cin>>n>>r>>b;
    string s="";
    for(int i=1;i<=b;i++){
       s+='R';
       s+='B';
    }
    s+='R';
    int count=r-b-1;
    if(count==0){cout<<s<<endl;return;}
    int grp=count/(b+1);
    int rem=count%(b+1);
    string tmp="";
    for(int i=0;i<grp;i++){
       tmp+='R';
    }
    for(int i=1,j=1;j<=b+1;j++,i+=(grp+2)){
       s.insert(i-1,tmp);
    }
    for(int i=1;(i<=s.size()) && (rem--) ;i+=(grp+3)){
       s.insert(i-1,"R");
    }
    cout<<s<<endl;
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