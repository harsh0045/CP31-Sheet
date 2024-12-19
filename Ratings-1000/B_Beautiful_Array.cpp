#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int n,k,b,s;
    
    cin>>n>>k>>b>>s;
    
    bool smax= s<=(k*b+(k-1)*n)?true:false;
    bool smin= s>=(k*b)?true:false;
    // bool bmin=((s-(k-1)*(n-1))/k)<=b?true:false;
    // bool bmax=(s/k)>=b?true:false;

    if(smin && smax){
       long long int curr=b*k + k-1;
       curr=(s<curr)?s:curr;
       cout<<curr<<" ";
       long long int rm=s-curr;
       for(long long int i=1;i<n;i++){
          curr=(rm<(k-1))?rm:k-1;
          cout<<curr<<" ";
          rm-=curr;
       }
       cout<<endl;
      
    }else{
        cout<<-1<<endl;
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