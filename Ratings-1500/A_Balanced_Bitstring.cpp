#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        bool ok = true;
        vector<char> pattern(k, '?');  // To store the k-cycle pattern
        
        // Step 1: Try to fix the pattern by resolving conflicts in the k-cycles
        for (int i = 0; i < n; i++) {
            if (s[i] != '?') {
                if (pattern[i % k] == '?') {
                    pattern[i % k] = s[i];  // Fix the pattern
                } else if (pattern[i % k] != s[i]) {
                    ok = false;  // Conflict detected
                    break;
                }
            }
        }
        
        if (!ok) {
            cout << "NO\n";
            continue;
        }
        
        // Step 2: Count '0's and '1's in the pattern
        int one = 0, zero = 0;
        for (int i = 0; i < k; i++) {
            if (pattern[i] == '1') one++;
            if (pattern[i] == '0') zero++;
        }
        
        // Step 3: Check if we can balance the pattern
        if (one > k / 2 || zero > k / 2) {
            cout << "NO\n";
            continue;
        }
        
        // Step 4: Check the sliding window to ensure every substring of size k is balanced
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                s[i] = pattern[i % k];  // Fill '?' with the balanced pattern
            }
        }
        
        // Step 5: Perform final sliding window check
        one = 0, zero = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == '1') one++;
            if (s[i] == '0') zero++;
        }
        
        ok = (one <= k / 2 && zero <= k / 2);
        
        for (int i = k; i < n && ok; i++) {
            if (s[i - k] == '1') one--;
            if (s[i - k] == '0') zero--;
            if (s[i] == '1') one++;
            if (s[i] == '0') zero++;
            if (one > k / 2 || zero > k / 2) {
                ok = false;
                break;
            }
        }
        
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int t;cin>>t;
// 	while(t--){
// 	int n,k;string s;cin>>n>>k>>s;
// 	bool ok=1;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(s[i]!='?' and s[i%k]!='?' and s[i]!=s[i%k]){ok=0;break;}
// 		if(s[i]!='?') s[i%k]=s[i];
// 	}
// 	int one=0,zero=0;
// 	for(int i=0;i<k;i++)
// 	{one=one+(s[i]=='1');
// 	zero=zero+(s[i]=='0');
// 	}
// 	if(ok and zero<=k/2 and one<=k/2)cout<<"YES";
// 	else cout<<"NO";
// 	cout<<endl;
// 	}
// }