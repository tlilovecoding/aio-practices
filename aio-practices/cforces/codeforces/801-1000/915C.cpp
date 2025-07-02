#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string a;
    ll b;
    cin >> a >> b;

    map<ll, ll> freq;
    for (char c : a) {
        freq[c - '0']++;
    }

    ll ans = 0;

    // Build the answer digit by digit
    for (int pos = 1; pos <= a.size(); pos++) {
        // Try digits from 9 to 0 to build the largest valid number
        for (int c = 9; c >= 0; c--) {
            if (freq[c] == 0) continue;

            // Try placing digit c at this position
            freq[c]--;

            ll simulated = ans * 10 + c;

            // Simulate remaining digits in ascending order (smallest first)
            for (int j = 0; j <= 9; j++) {
                for (int t = 0; t < freq[j]; t++) {
                    simulated = simulated * 10 + j;
                }
            }

            // Check if this candidate is valid
            if (simulated <= b) {
                ans = ans * 10 + c;
                break; // Commit this digit
            }

            // If not valid, undo and try smaller digit
            freq[c]++;
        }
    }

    cout << ans << endl;
    return 0;
}
