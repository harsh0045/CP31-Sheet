#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    vector<int>fm(n,1e9);
    vector<int>sm(n,1e9);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
          
            if(x<fm[i]){
                
                sm[i]=fm[i];
                fm[i]=x;
            }
            else if(x<sm[i]){
                sm[i]=x;
            }
        }
    }
    long long int count=0;
    int mini=1e9;
    for(auto it:fm){
       mini=min(it,mini);
    }
    for(auto it:sm){
       count+=it;
    }
    count+=mini;
    long long int ans=0;
    for(auto it:sm){
       ans=max(ans,count-it);
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