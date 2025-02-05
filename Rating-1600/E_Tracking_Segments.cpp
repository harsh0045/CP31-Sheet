#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long ll;

bool check(vector<int>& prefix, vector<pair<int, int>>& segments) {
    for (auto& segment : segments) {
        int left = segment.first - 1;
        int right = segment.second - 1;
        int ones = prefix[right + 1] - prefix[left];
        int zeros = (right - left + 1) - ones;
        if (ones > zeros) {
            return true;
        }
    }
    return false;
}

void Harsh() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> segments(m);
    for (int i = 0; i < m; i++) {
        cin >> segments[i].first >> segments[i].second;
    }

    int q;
    cin >> q;

    vector<int> changes(q);
    for (int i = 0; i < q; i++) {
        cin >> changes[i];
    }

    // Binary Search to Find the Minimum Change
    int low = 0, high = q - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Simulate changes up to `mid`
        vector<int> a(n, 0);
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i <= mid; i++) {
            a[changes[i] - 1] = 1;
        }

        // Build prefix sum
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }

        if (check(prefix, segments)) {
            ans = mid + 1;  // 1-based index
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        Harsh();
    }
    return 0;
}
