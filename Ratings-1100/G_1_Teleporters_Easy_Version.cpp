#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Harsh(){
    int n,c;
    cin>>n>>c;
    vector<ll>temp(n);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      temp[i]=(x+i+1);
    }
    sort(temp.begin(),temp.end());
    ll count=0;
    while(count<n){
        if(c<temp[count])break;
        c=c-temp[count];
        count++;
    }
    cout<<count<<endl;

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