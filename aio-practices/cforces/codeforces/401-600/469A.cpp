#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> completed(n, 0);

    // Levels completed by the first player
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int j;
        cin >> j;
        completed[j - 1] = 1; // Mark level as completed (adjust for 1-based index)
    }

    // Levels completed by the second player
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int j;
        cin >> j;
        completed[j - 1] = 1; // Mark level as completed (adjust for 1-based index)
    }

    // Count completed levels
    int w = count(completed.begin(), completed.end(), 1);

    // Output result
    if (w == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
