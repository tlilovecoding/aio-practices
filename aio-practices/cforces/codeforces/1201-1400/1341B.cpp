#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> peaks(n, 0);
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                peaks[i] = 1;
            }
        }

        int currPeaks = 0;
        for (int i = 1; i < k - 1; i++) {
            currPeaks += peaks[i];
        }

        int maxPeaks = currPeaks;
        int leftIndex = 0;

        for (int i = 1; i <= n - k; i++) {
            currPeaks = currPeaks + peaks[i + k - 2] - peaks[i];
            if (currPeaks > maxPeaks) {
                maxPeaks = currPeaks;
                leftIndex = i;
            }
        }
        cout << maxPeaks + 1 << " " << leftIndex + 1 << endl;
    }
}
