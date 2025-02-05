#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void Harsh(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
     ll o = 0, e = 0;
        for (int i = 0; i<n;i++){
            if(i%2==0)
                o = __gcd(o, arr[i]);
            else
                e = __gcd(e, arr[i]);
        }

        int gcdo = true, gcde = true;

        for (int i = 0; i < n;i++){
            if(i%2==0 && arr[i]%e==0)
                gcde = false;
            else if(i%2 && arr[i]%o==0)
                gcdo = false;
        }

        if(gcdo)
            cout << o << endl;
        else if(gcde)
            cout << e << endl;
        else
            cout << 0 << endl;
    
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        Harsh();
    }
    return 0;
}