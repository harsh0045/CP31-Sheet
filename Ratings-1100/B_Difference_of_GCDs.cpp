#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>temp(n);
    for(int i=1;i<=n;i++){
        if(l%i==0)
            temp[i-1]=l;
        else 
           temp[i-1]=l + (i-(l%i));
        if(temp[i-1]>r){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
        for(auto it:temp){
        cout<<it<<" " ;
    }
    cout<<endl;
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