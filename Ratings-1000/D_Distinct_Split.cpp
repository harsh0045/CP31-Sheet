#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>alpha1(26,0);
    vector<int>alpha2(26,0);
    vector<int>a(n);
    int count1=0;
    int count2=0;
    vector<int>b(n);
    for(int i=0;i<n;i++){
       if(alpha1[s[i]-'a']==0){count1++;alpha1[s[i]-'a']=1;}
       a[i]=count1;
       if(alpha2[s[n-i-1]-'a']==0){count2++;alpha2[s[n-i-1]-'a']=1;}
       b[n-i-1]=count2;
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
       ans=max(ans,a[i]+b[i+1]);
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