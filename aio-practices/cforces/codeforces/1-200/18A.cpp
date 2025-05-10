#include <bits/stdc++.h>
using namespace std;

bool is_right_triangle(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
    vector<int> d2 = {
        (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second),
        (a.first - c.first) * (a.first - c.first) + (a.second - c.second) * (a.second - c.second),
        (b.first - c.first) * (b.first - c.first) + (b.second - c.second) * (b.second - c.second)
    };
    sort(d2.begin(), d2.end());
    return d2[0] > 0 && d2[0] + d2[1] == d2[2];  // Avoid degenerate case
}

int main() {
    vector<pair<int, int>> pts(3);
    for (int i = 0; i < 3; ++i) {
        cin >> pts[i].first >> pts[i].second;
    }

    if (is_right_triangle(pts[0], pts[1], pts[2])) {
        cout << "RIGHT\n";
        return 0;
    }

    // Try all 6 one-unit moves on each point
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int i = 0; i < 3; ++i) {
        for (int d = 0; d < 4; ++d) {
            auto original = pts[i];
            pts[i].first += dx[d];
            pts[i].second += dy[d];
            if (is_right_triangle(pts[0], pts[1], pts[2])) {
                cout << "ALMOST\n";
                return 0;
            }
            pts[i] = original;  // restore
        }
    }

    cout << "NEITHER\n";
    return 0;
}
