#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        double d, h;
        cin >> n >> d >> h;
        vector<long long> heights(n);

        for (int i = 0; i < n; i++) {
            cin >> heights[i]; // Input the heights
        }

        double totalArea = 0.0;

        for (int i = 0; i < n - 1; i++) {
            double gap = heights[i + 1] - heights[i];
            if (gap >= h) {
                // No overlap, add the full triangle area
                totalArea += (d * h) / 2.0;
            } else {
                // Overlapping case
                double overlapHeight = h - gap;
                double overlapBase = (overlapHeight / h) * d;
                double overlapArea = (overlapBase * overlapHeight) / 2.0;
                totalArea += (d * h) / 2.0 - overlapArea;
            }
        }

        // Add the last triangle's area
        totalArea += (d * h) / 2.0;

        cout << fixed << setprecision(6) << totalArea << endl;
    }

    return 0;
}
