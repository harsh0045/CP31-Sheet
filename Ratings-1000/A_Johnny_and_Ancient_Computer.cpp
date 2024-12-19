#include<bits/stdc++.h>
using namespace std;
void Harsh(){
    long long int a,b;
    cin>>a>>b;
    long long int count=0;
    while(1){
        if(a<b){
            if(a*8<=b){a=a*8;count++;}
            else if(a*4<=b){a=a*4;count++;}
            else if(a*2<=b){a=a*2;count++;}
            else { cout<<-1<<endl;return;}
        }
        else if(a>b){
            if(!(a%8) && (a/8)>=b){a=a/8;count++;}
            else if(!(a%4) && (a/4)>=b){a=a/4;count++;}
            else if(!(a%2) && (a/2)>=b){a=a/2;count++;}
            else { cout<<-1<<endl;return;}
        }else{
            cout<<count<<endl;
            return;
        }
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