#include<bits/stdc++.h>
using namespace std;

void Harsh(){
    int n,x;
    cin>>n;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
       cin>>x;
       st.insert(x);
    }
    if(st.size()==n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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