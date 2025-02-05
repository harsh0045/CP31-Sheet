#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>alpha(26);
    for(auto it:s){
        alpha[it-'a']++;
    }
   
    while(1){
        int count=0;
        for(int i=0;i<26;i++){
           if(alpha[i]>0){
             cout<<(char)(i+'a');
             count++;
             alpha[i]--;
           }
        }
        if(count==0)break;
    }
    cout<<endl;

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