#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    int x=0,y=n-1;
    int t1=0,t2=0;
    int ans=0;
    int check=0;
    while(x<y){
       if(check==0){
         t1+=temp[x];
         t2+=temp[y];
       }
       else if(check==1)t1+=temp[x];
       else t2+=temp[y];
       
       if(t1==t2){
         ans=max(ans,x+1+n-y);
         x++;
         y--;
         check=0;
       }
       else if(t1<t2){x++;check=1;}
       else {y--;check=2;}
       
    }
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