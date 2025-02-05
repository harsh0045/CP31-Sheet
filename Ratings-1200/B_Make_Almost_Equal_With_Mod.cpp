#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void Harsh(){
    int n;
    cin>>n;
    vector<ll>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    ll ck=2;
    while(1){
       int i=0;
       set<ll>st;
       while(i<n){
         st.insert(temp[i]%ck);
         i++;
       }
       if(st.size()==2)break;
       ck=ck*2LL;
    }
    cout<<ck<<endl;

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