#include<bits/stdc++.h>
using namespace std;
void solve( int n, int &xr, int c){
     int ck=c;
     for(int i=0;i<n;i++){
      int x;
      cin>>x;
      ck=ck|x;
      if(ck==c)xr=xr|x;
    }
}
void Harsh(){
    int n,c;
    cin>>n>>c;
    int xr=0;
    solve(n,xr,c);
    solve(n,xr,c);
    solve(n,xr,c);
    if(xr==c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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