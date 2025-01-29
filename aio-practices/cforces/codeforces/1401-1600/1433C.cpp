#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Number of piranhas
        vector<int> a(n);

        // Input sizes of the piranhas
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_size = *max_element(a.begin(), a.end());
        int dominant_index = -1;

        // Find a dominant piranha
        for (int i = 0; i < n; i++) {
            if (a[i] == max_size) {
                // Check if it has an adjacent smaller piranha
                if ((i > 0 && a[i - 1] < a[i]) || (i < n - 1 && a[i + 1] < a[i])) {
                    dominant_index = i + 1; // Convert to 1-based index
                    break;
                }
            }
        }

        cout << dominant_index << endl; // Output result for this test case
    }

    return 0;
}
