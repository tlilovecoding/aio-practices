#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i1, j1, i2, j2;
        string d;
        cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
        i1--; j1--; i2--; j2--;

        map<string, pair<int, int>> dir = {
            {"DR", {1, 1}},
            {"DL", {1, -1}},
            {"UR", {-1, 1}},
            {"UL", {-1, -1}}
        };

        // visited[i][j][direction]
        map<string, int> dirId = {{"DR", 0}, {"DL", 1}, {"UR", 2}, {"UL", 3}};
        vector<vector<vector<bool>>> visited(n, vector<vector<bool>>(m, vector<bool>(4, false)));

        int bounces = 0;
        while (true) {
            if (i1 == i2 && j1 == j2) {
                cout << bounces << "\n";
                break;
            }
            if (visited[i1][j1][dirId[d]]) {
                cout << -1 << "\n";
                break;
            }

            visited[i1][j1][dirId[d]] = true;

            int di = dir[d].first;
            int dj = dir[d].second;

            bool bounced = false;

            // check if next move would go out of bounds
            if (i1 + di < 0 || i1 + di >= n) {
                di *= -1;
                bounced = true;
            }
            if (j1 + dj < 0 || j1 + dj >= m) {
                dj *= -1;
                bounced = true;
            }

            // update direction string accordingly
            for (auto &entry : dir) {
                if (entry.second.first == di && entry.second.second == dj) {
                    d = entry.first;
                    break;
                }
            }

            if (bounced) bounces++;

            // move the ball
            i1 += di;
            j1 += dj;
        }
    }
}
