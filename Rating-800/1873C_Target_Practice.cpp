#include<bits/stdc++.h>
using namespace std;
int MOD= 1e9 + 7;
int main()
{
    int t;
    cin>>t;
    while(t--){
       
        vector<vector<char>>temp(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>temp[i][j];
            }
        }
        int sum=0;
        for(int i=0;i<5;i++){
            int rowes=i+1;
            for(int j=0;j<10;j++){
              int coles=j+1;
              if(j>=5)coles=10-j;
              int mines=min(rowes,coles);
              if(temp[i][j]=='X')sum+=mines;
              
              if(temp[9-i][j]=='X')sum+=mines;
              
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}