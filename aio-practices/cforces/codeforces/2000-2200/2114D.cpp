#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    vector<int> x(n), y(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
        x[i] = a[i].first;
        y[i] = a[i].second;
    }

    if (n <= 2) {
        cout << n << "\n";
        return;
    }

    // Store (value, index) to track which point it belongs to
    vector<pair<int, int>> x_sorted(n), y_sorted(n);
    for (int i = 0; i < n; ++i) {
        x_sorted[i] = {x[i], i};
        y_sorted[i] = {y[i], i};
    }

    sort(x_sorted.begin(), x_sorted.end());
    sort(y_sorted.begin(), y_sorted.end());

    // Get up to top 2 min and max for x and y
    int x_min1 = x_sorted[0].first, x_min1_id = x_sorted[0].second;
    int x_min2 = x_sorted[1].first;

    int x_max1 = x_sorted[n - 1].first, x_max1_id = x_sorted[n - 1].second;
    int x_max2 = x_sorted[n - 2].first;

    int y_min1 = y_sorted[0].first, y_min1_id = y_sorted[0].second;
    int y_min2 = y_sorted[1].first;

    int y_max1 = y_sorted[n - 1].first, y_max1_id = y_sorted[n - 1].second;
    int y_max2 = y_sorted[n - 2].first;

    // Base rectangle with all points
    int base_area = (x_max1 - x_min1 + 1) * (y_max1 - y_min1 + 1);
    int ans = base_area;

    // Try removing only the points that affect extremes
    set<int> candidates = {x_min1_id, x_max1_id, y_min1_id, y_max1_id};

    for (int i : candidates) {
        int cur_x = a[i].first;
        int cur_y = a[i].second;

        int new_x_min = (cur_x == x_min1 ? x_min2 : x_min1);
        int new_x_max = (cur_x == x_max1 ? x_max2 : x_max1);
        int new_y_min = (cur_y == y_min1 ? y_min2 : y_min1);
        int new_y_max = (cur_y == y_max1 ? y_max2 : y_max1);

        int width = new_x_max - new_x_min + 1;
        int height = new_y_max - new_y_min + 1;
        int area = width * height;

        if (area == n - 1) {
            ans = min(ans, min((width + 1) * height, width * (height + 1)));
        } else {
            ans = min(ans, area);
        }
    }

    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
