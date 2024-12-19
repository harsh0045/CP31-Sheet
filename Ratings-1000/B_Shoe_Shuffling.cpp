#include<bits/stdc++.h>
using namespace std;

void Harsh() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> ans;
    int st = 1;  
    bool possible=true;
    int prev;  
    cin >> prev;

    for (int i = 2; i <= n; i++) {
        int curr;
        cin >> curr;

        if ((curr == prev)||(!possible)) continue;
        if ((i - 1 - st) == 0) { 
            possible=false;
        }
        ans.push_back({st, i - 1});
        st = i;  
        prev = curr;
    }

    if ((!possible) || ((n - st) == 0)) {
            cout<<-1<<endl;
            return;
    }
    ans.push_back({st, n});
    for (auto it : ans) {
        cout << it.second << " ";
        for (int j = it.first; j < it.second; j++) {
            cout << j << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Harsh();
    }
    return 0;
}
