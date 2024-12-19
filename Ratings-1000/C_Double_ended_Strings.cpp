#include<bits/stdc++.h>
using namespace std;
int longestCommonSubstringSize(const std::string& str1, const std::string& str2) {
    int n = str1.length();
    int m = str2.length();
    int maxLength = 0;

    // Create a 2D DP table to store lengths of longest common suffixes
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    // Fill dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = std::max(maxLength, dp[i][j]);
            }
        }
    }

    return maxLength;
}
void Harsh(){
    string a,b;
    cin>>a>>b;
    int maxc=longestCommonSubstringSize(a,b);
    cout<< a.size()+ b.size() -2*maxc <<endl;
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