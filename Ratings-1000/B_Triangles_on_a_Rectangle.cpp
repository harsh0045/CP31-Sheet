#include <bits/stdc++.h>
using namespace std;

// Function to calculate the area of the triangle
long long int ar(long long int x1, long long int y1, long long int x2, long long int y2, long long int x3, long long int y3) {
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

void Harsh() {
    long long int x, y;
    cin >> x >> y;
    vector<vector<pair<long long int, long long int>>> temp(4);

    for (int i = 0; i < 4; i++) {
        int k;
        cin >> k;
        long long int mid1 = -1, mid2 = -1;
        long long int mini = -1, maxi = -1;

        for (int j = 1; j <= k; j++) {  // Changed loop variable to 'j' to avoid conflict with outer 'i'
            long long int z;
            cin >> z;
            if (j == k / 2) mid1 = z;
            if (k % 2 == 0 && j == (k / 2 + 1)) mid2 = z;
            if (j == 1) mini = z;
            if (j == k) maxi = z;
        }

        if (i == 0) {
            temp[0].emplace_back(mini, 0LL);
            temp[0].emplace_back(maxi, 0LL);
            temp[1].emplace_back(mid1, 0LL);
            if (mid2 != -1) temp[1].emplace_back(mid2, 0LL);
        } else if (i == 1) {
            temp[1].emplace_back(mini, y);
            temp[1].emplace_back(maxi, y);
            temp[0].emplace_back(mid1, y);
            if (mid2 != -1) temp[0].emplace_back(mid2, y);
        } else if (i == 2) {
            temp[2].emplace_back(0LL, mini);
            temp[2].emplace_back(0LL, maxi);
            temp[3].emplace_back(0LL, mid1);
            if (mid2 != -1) temp[3].emplace_back(0LL, mid2);
        } else {
            temp[3].emplace_back(x, mini);
            temp[3].emplace_back(x, maxi);
            temp[2].emplace_back(x, mid1);
            if (mid2 != -1) temp[2].emplace_back(x, mid2);
        }
    }

    long long int ans = 0;
    for (int i = 0; i < 4; i++) {
        int sz = temp[i].size();
        if (sz != 4) {
            ans = max(ans, ar(temp[i][0].first, temp[i][0].second, temp[i][1].first, temp[i][1].second, temp[i][2].first, temp[i][2].second));
        } else {
            if (i % 2) {
                ans = max(ans, ar(temp[i][1].first, temp[i][1].second, temp[i][2].first, temp[i][2].second, temp[i][3].first, temp[i][3].second));
                ans = max(ans, ar(temp[i][0].first, temp[i][0].second, temp[i][2].first, temp[i][2].second, temp[i][3].first, temp[i][3].second));
            } else {
                ans = max(ans, ar(temp[i][0].first, temp[i][0].second, temp[i][1].first, temp[i][1].second, temp[i][2].first, temp[i][2].second));
                ans = max(ans, ar(temp[i][0].first, temp[i][0].second, temp[i][1].first, temp[i][1].second, temp[i][3].first, temp[i][3].second));
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Harsh();
    }
    return 0;
}
