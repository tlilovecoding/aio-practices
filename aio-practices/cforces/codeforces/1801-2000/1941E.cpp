#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX_M = 2e5 + 5;
const ll INF = 1e18;

int n, m, k, d;
ll dp[MAX_M];       // DP array for current row
ll rowCostSum[MAX_M]; // Prefix sum of row costs
int q[MAX_M];       // Monotonic queue for sliding window

void solve() {
    cin >> n >> m >> k >> d;

    ll answer = INF;

    // Process each row
    for (int row = 1; row <= n; row++) {
        int front = 1, back = 0;

        for (int col = 1; col <= m; col++) {
            int depth;
            cin >> depth;

            // Remove indices that are too far from current col
            while (front <= back && col - q[front] - 1 > d) {
                front++;
            }

            // Compute dp[col]
            if (col == 1) {
                dp[col] = 1; // Starting support cost (depth 0 + 1)
            } else {
                dp[col] = dp[q[front]] + depth + 1; // Use best previous support
            }

            // Maintain monotonic queue: remove worse (higher) options
            while (front <= back && dp[q[back]] >= dp[col]) {
                back--;
            }

            q[++back] = col; // Add current column as candidate
        }

        // Accumulate cost of this row's bridge (last support at column m)
        rowCostSum[row] = rowCostSum[row - 1] + dp[m];

        // If we have at least k rows, try taking the last k rows
        if (row >= k) {
            ll totalCost = rowCostSum[row] - rowCostSum[row - k];
            answer = min(answer, totalCost);
        }
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
