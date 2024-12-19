#include<bits/stdc++.h>
using namespace std;
int computeXOR(int n){

    if(n % 4 == 0){return n;}
    else if(n % 4 == 1){return 1;}
    else if(n % 4 == 2){return n + 1;}
    return 0;
}

void Harsh(){
    int a,b;
    cin>>a>>b;
    int xr=computeXOR(a-1);
    if(xr==b)cout<<a<<endl;
    else if((xr^b)!=a)cout<<a+1<<endl;
    else cout<<a+2<<endl;

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