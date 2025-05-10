#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    vector<pair<long long, int>> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i].first;
        values[i].second = i + 1; // Store 1-based index
    }
    sort(values.begin(), values.end());

    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            long long curr_sum = values[i].first + values[l].first + values[r].first;
            if (curr_sum == x) {
                cout << values[i].second << " " << values[l].second << " " << values[r].second << endl;
                return 0;
            } else if (curr_sum < x) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}