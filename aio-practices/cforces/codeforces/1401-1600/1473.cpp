#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        // Prefix arrays
        vector<int> prefixSum(n + 1, 0);
        vector<int> prefixMin(n + 1, 0);
        vector<int> prefixMax(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            int delta = (s[i] == '+') ? 1 : -1;
            prefixSum[i + 1] = prefixSum[i] + delta;
            prefixMin[i + 1] = min(prefixMin[i], prefixSum[i + 1]);
            prefixMax[i + 1] = max(prefixMax[i], prefixSum[i + 1]);
        }

        // Suffix arrays
        vector<int> suffixMin(n + 2, 0);
        vector<int> suffixMax(n + 2, 0);
        vector<int> suffixSum(n + 2, 0);

        for (int i = n - 1; i >= 0; --i) {
            int delta = (s[i] == '+') ? 1 : -1;
            suffixSum[i + 1] = suffixSum[i + 2] + delta;
            suffixMin[i + 1] = min(0, suffixMin[i + 2] + delta);
            suffixMax[i + 1] = max(0, suffixMax[i + 2] + delta);
        }

        // Process queries
        while (m--) {
            int l, r;
            cin >> l >> r;

            // Prefix before l
            int preMin = prefixMin[l - 1];
            int preMax = prefixMax[l - 1];

            // Suffix after r
            int delta = prefixSum[l - 1];
            int postMin = suffixMin[r + 1] + delta;
            int postMax = suffixMax[r + 1] + delta;

            int totalMin = min(preMin, postMin);
            int totalMax = max(preMax, postMax);

            cout << (totalMax - totalMin + 1) << '\n';
        }
    }

    return 0;
}
