#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    int count=0;
    for(int i=0;i<n;i++){
       if(s[i]==')'){
         if(st.empty()){
            s.erase(s.begin()+i);
            s.push_back(s[i]);
            i--;
            count++;
         }else{
            st.pop();
         }
       }else st.push('(');
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