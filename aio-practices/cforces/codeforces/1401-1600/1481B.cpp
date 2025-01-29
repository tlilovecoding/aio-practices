#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        // Simulate boulder placement
        int last_position = -1; // Stores the 1-based index of the k-th boulder
        while (k > 0) {
            bool placed = false;

            for (int i = 0; i < n - 1; i++) {
                if (heights[i] < heights[i + 1]) {
                    heights[i]++;
                    last_position = i + 1; // Update last position (1-based index)
                    k--;                  // Decrease boulders left
                    placed = true;
                    break; // Stop after placing one boulder
                }
            }

            if (!placed) {\
                last_position = -1;
                break;
            }
        }

        cout << last_position << endl;
    }

    return 0;
}
