#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, l, r;
    cin >> n >> h >> l >> r;

    vector<int> numberHrs(n + 1);
    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> numberHrs[i];
        prefix[i] = prefix[i - 1] + numberHrs[i];
    }

    const int NEG_INF = -1e9;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, NEG_INF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (dp[i][j] == NEG_INF) continue;

            int total = prefix[i] - j;

            // Option 1: sleep after numberHrs[i+1] hours
            int t1 = (total + numberHrs[i + 1]) % h;
            int good1 = (l <= t1 && t1 <= r) ? 1 : 0;
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + good1);

            // Option 2: sleep after numberHrs[i+1] - 1 hours
            int t2 = (total + numberHrs[i + 1] - 1) % h;
            int good2 = (l <= t2 && t2 <= r) ? 1 : 0;
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + good2);
        }
    }

    int result = *max_element(dp[n].begin(), dp[n].end());
    cout << result << endl;

    return 0;
}
