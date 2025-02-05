#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>arr,int x,int y,int ck){
    while(x<y){
        if(arr[x]==arr[y]){
            x++;
            y--;
        }
        else if(arr[x]==ck)x++;
        else if(arr[y]==ck)y--;
        else return false;
    }
    return true;
}
void Harsh(){
    int n;
    cin>>n;
 
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int x=0;
    int y=n-1;
    while(x<y && (arr[x]==arr[y])){
       x++;
       y--;
    }
    if(x>=y){cout<<"YES"<<endl;return;}
    int one=arr[x];
    int two=arr[y];
    bool check1=isPossible(arr,x,y,one);
    bool check2=isPossible(arr,x,y,two);
    
   if(check1 || check2){cout<<"YES"<<endl;return;}
   cout<<"NO"<<endl;


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