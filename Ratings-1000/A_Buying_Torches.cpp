#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int x,y,k;
    cin>>x>>y>>k;
    long long int a=(k*(y+1)-1);
    long long int b= x-1;
    long long int c=a/b;
    long long int ans=(a%b)?(c+1+k):(c+k);
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