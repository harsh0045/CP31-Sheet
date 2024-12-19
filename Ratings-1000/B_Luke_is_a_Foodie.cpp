#include<bits/stdc++.h>
using namespace std;
long long int MOD=1e9;
void Harsh(){
    
        long n, x; 
        cin>>n>>x;
        long count=0, low=1, high=1e9;
        for(long p = 0; p < n; p++){
            long cur;
            cin>>cur;
            long left = cur - x;
            long right = cur + x;
            low  = max(left,low);
            high = min(right,high);
            if(low > high){++count; low = left; high = right;}
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