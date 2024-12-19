#include<bits/stdc++.h>
using namespace std;
bool check(long long int i){
    long long int n=i;
    while(i){
        long long int lastdigit=i%10;
        if(lastdigit!=0 && n%lastdigit)return false;
        i=i/10;
    }
    return true;
}
void Harsh(){
    long long int n;
    cin>>n;
    long long int i=n;
    while(1){
       if( i==1e18 ||check(i)){
         cout<<i<<endl;
         return;
       }
       i++;
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