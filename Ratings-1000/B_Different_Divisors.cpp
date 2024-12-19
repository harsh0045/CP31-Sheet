#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
       if(n%i == 0 )return false;
    }
    return true;
}

void Harsh(){
    int d;
    cin>>d;
    int i=d+1;
    long long int ans=1;
    int c=1;
    while(1){
        if(isPrime(i)){
            ans=ans*i;
            i+=d;
            c++;
        }else i++;
        if(c==3){cout<<ans<<endl;return;}
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