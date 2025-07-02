#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> platforms(m);
    int sum = 0;

    for (int i = 0; i < m; i++) {
        cin >> platforms[i];
        sum += platforms[i];
    }

    int currentPosition = 0;
    vector<int> ans(n + 2, 0); // initialize all cells as water (0)

    for (int i = 0; i < m; i++) {
        if (currentPosition + d + sum > n + 1) {
            // Not enough room to leave a gap of d
            for (int j = currentPosition + 1; j < currentPosition + 1 + platforms[i]; j++)
                ans[j] = i + 1; // platform numbering is 1-based
            currentPosition = currentPosition + 1 + platforms[i] - 1;
        } else {
            // We can leave a gap of d
            for (int j = currentPosition + d; j < currentPosition + d + platforms[i]; j++)
                ans[j] = i + 1;
            currentPosition = currentPosition + d + platforms[i] - 1;
        }
        sum -= platforms[i];
    }

    // Check if we can reach the end (right bank at n+1)
    if (currentPosition + d >= n + 1) {
        cout << "YES\n";
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
