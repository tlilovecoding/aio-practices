#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        float x, y;
        cin >> n >> m >> x >> y;

        char grid[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        float cheaperOption42;
        if (y / 2 > x) {
            cheaperOption42 = x;
        } else {
            cheaperOption42 = y / 2;
        }

        int totalCost = 0;
        for (int i = 0; i < n; i++) {
            int j = 0;
            while (j < m) {
                if (grid[i][j] == '*') {
                    j++;
                } else {
                    if (j + 1 < m && grid[i][j + 1] == '.') {
                        totalCost += 2 * cheaperOption42;
                        j += 2;
                    } else {
                        totalCost += x;
                        j++;
                    }
                }
            }
        }
        cout << totalCost << endl;
    }
}
