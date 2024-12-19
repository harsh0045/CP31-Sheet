#include<bits/stdc++.h>
using namespace std;

void Harsh(){
    int n;
    cin>>n;
    if(n%2==0)cout<<n/2 << " "<<n/2<<endl;
    else{
       
        int x=1;
        for(int i=2;i*i<=n;i++){
           if(n%i==0){
             x=n/i;
             break;
           }
        }
        cout<<x<<" "<<n-x<<endl;

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