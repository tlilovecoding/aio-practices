#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> trees(n);
    for (int i = 0; i < n; ++i) {
        cin >> trees[i].first >> trees[i].second;
    }

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int result = 2; // first and last tree can always be felled
    long long last_position = trees[0].first;

    for (int i = 1; i < n - 1; ++i) {
        long long x = trees[i].first;
        long long h = trees[i].second;

        // Can fall to the left
        if (x - h > last_position) {
            result++;
            last_position = x;
        }
        // Can fall to the right
        else if (x + h < trees[i + 1].first) {
            result++;
            last_position = x + h;
        }
        // Must stand
        else {
            last_position = x;
        }
    }

    cout << result << endl;
    return 0;
}
