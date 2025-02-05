#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int l,r;
    cin>>l>>r;
    int count=r-l+1;
    if(count%4==3 && l%2)cout<<(count/4) + 1<<endl;
    else cout<<count/4<<endl;
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