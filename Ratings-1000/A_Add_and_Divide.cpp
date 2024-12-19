#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int a,b;
    cin>>a>>b;
    long long int inc=0;
    if(b==1){inc++;b++;}
    long long int i=b;
    long long int ans=INT_MAX;
    while(1){
        long long int res=i;
        long long int pow=1;
        while(res<=a){
           res=res*i;
           pow++;
        }
        if((pow + inc) > ans) {cout<<ans<<endl;return;}
        ans=pow+inc;
        i++;
        inc++;
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