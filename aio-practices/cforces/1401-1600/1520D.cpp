#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> cnt;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cnt[arr[i] - i]++;
        }

        long long ans = 0;
        for (auto &[key, freq] : cnt) {
            if (freq > 1) {
                ans += 1LL * freq * (freq - 1) / 2; // Calculate combinations
            }
        }

        cout << ans << endl;
    }

    return 0;
}
