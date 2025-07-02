#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        // dp[i][j]: min cost to cover first i elements with j changes
        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, LLONG_MAX));
        dp[0][0] = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= k; j++) {
                if (dp[i][j] == LLONG_MAX) continue;
                ll mn = LLONG_MAX;
                for (int d = 0; j + d <= k && i + d < n; d++) {
                    mn = min(mn, arr[i + d]);
                    dp[i + d + 1][j + d] = min(dp[i + d + 1][j + d], dp[i][j] + (d + 1) * mn);
                }
            }
        }
        ll ans = LLONG_MAX;
        for (int j = 0; j <= k; j++) {
            ans = min(ans, dp[n][j]);
        }
        cout << ans << '\n';
    }
    return 0;
}