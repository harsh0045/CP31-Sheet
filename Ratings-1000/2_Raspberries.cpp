#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n,k;
    cin>>n>>k;

    int counte=0;
    int ck3=2;
    bool ck4=false;
    bool n3=false;
    bool n7=false;
    int min5=4;

    for(int i=0;i<n;i++){
      int x;
      cin>>x;

      if(x%2==0)counte++;

      if(x%3)ck3=min(ck3,3-x%3);
      else ck3=0;

      if(x%4==0)ck4=true;
      if(x==3)n3=true;
      if(x==7)n7=true;

      if(x%5)min5=min(min5,5-x%5);
      else min5=0;
    }
    if(k==2){
        if(counte)cout<<0<<endl;
        else cout<<1<<endl;
    }
    else if(k==3){
        cout<<ck3<<endl;
    }
    else if(k==4){
        if(ck4 ||counte>=2 )cout<<0<<endl;
        else if (counte==1 || n3 || n7)cout<<1<<endl;
        else cout<<2<<endl;
    }
    else if(k==5){
        cout<<min5<<endl;
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