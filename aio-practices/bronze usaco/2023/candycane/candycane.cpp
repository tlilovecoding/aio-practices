#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<ll> cows(n), heights(m);

    // Input the initial heights of cows
    for (ll i = 0; i < n; i++) {
        cin >> cows[i];
    }

    // Input the height values to distribute
    for (ll i = 0; i < m; i++) {
        cin >> heights[i];
    }

    // Distribute heights among cows
    for (ll i = 0; i < m; i++) {
        ll upper = heights[i];
        ll lower = 0;

        for (ll cow = 0; cow < n; cow++) {
            // Only distribute if the cow's height is greater than the current `lower`
            if (cows[cow] > lower) {
                if (lower >= upper) break; // Stop if fully distributed

                // Calculate the growth the current cow can consume
                ll grown = min(upper, cows[cow]) - lower;
                cows[cow] += grown; // Update cow's height
                lower += grown;     // Update the distributed height
            }
        }
    }

    // Output the final heights of the cows
    for (int i = 0; i < n; i++) {
        cout << cows[i] << endl;
    }

    return 0;
}
