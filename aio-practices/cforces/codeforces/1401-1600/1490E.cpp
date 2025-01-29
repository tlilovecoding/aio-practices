#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> players(n);
        for (int i = 0; i < n; ++i) {
            cin >> players[i].first;
            players[i].second = i + 1; // Store original index
        }

        // Sort players based on token count
        sort(players.begin(), players.end());

        // Find the first player who can have a chance of winning
        long long sum = 0;
        int start = 0;
        for (int i = 0; i < n; ++i) {
            if (sum < players[i].first) {
                start = i; // Update starting point for players with chances
            }
            sum += players[i].first;
        }

        // Collect results
        vector<int> result;
        for (int i = start; i < n; ++i) {
            result.push_back(players[i].second);
        }

        // Sort results in ascending order of original indices
        sort(result.begin(), result.end());

        // Output the result
        cout << result.size() << endl;
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
