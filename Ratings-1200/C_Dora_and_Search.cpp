#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
  
    int mine=1;
    int maxe=n;
    int x=0;
    int y=n-1;
    
    while(x<y){
       if(temp[x]==mine){
          mine++;
          x++;
       }else if(temp[x]==maxe){
          maxe--;
          x++;
       }else if(temp[y]==mine){
           mine++;
           y--;
       }else if(temp[y]==maxe){
           maxe--;
           y--;
       }else break;
    }
    if(x<y)cout<<x+1<<" "<<y+1<<endl;
    else cout<<-1<<endl;
    
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