#include <bits/stdc++.h>
using namespace std;

struct cow {
    int x, y, index;
    bool stopped = false; // Flag to indicate if the cow has stopped
};

int main() {
    int n;
    cin >> n;
    vector<cow> east, north;

    // Input
    for (int i = 0; i < n; i++) {
        char direction;
        int x, y;
        cin >> direction >> x >> y;
        if (direction == 'E') {
            east.push_back(cow{x, y, i});
        } else {
            north.push_back(cow{x, y, i});
        }
    }

    // Sort by relevant coordinates
    sort(east.begin(), east.end(), [](const cow &a, const cow &b) { return a.y < b.y; });
    sort(north.begin(), north.end(), [](const cow &a, const cow &b) { return a.x < b.x; });

    vector<int> distances_idx(n, -1); // Initialize distances as "Infinity"

    // Collision Simulation
    for (auto &e : east) {
        for (auto &n : north) {
            if (e.stopped || n.stopped) continue; // Skip stopped cows

            if (e.x < n.x && e.y > n.y) {
                int x_distance = n.x - e.x;
                int y_distance = e.y - n.y;

                if (x_distance < y_distance) {
                    // North cow is stopped
                    if (distances_idx[n.index] == -1) {
                        distances_idx[n.index] = y_distance;
                        n.stopped = true;
                    }
                } else if (x_distance > y_distance) {
                    // East cow is stopped
                    if (distances_idx[e.index] == -1) {
                        distances_idx[e.index] = x_distance;
                        e.stopped = true;
                        break; // Stop further checks for this east cow
                    }
                }
            }
        }
    }

    // Output results
    for (int distance : distances_idx) {
        cout << (distance == -1 ? "Infinity" : to_string(distance)) << endl;
    }

    return 0;
}
