#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<ll> prefixSums(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefixSums[i] = prefixSums[i - 1] + a[i - 1];
        }

        int q;
        cin >> q;
        while (q--) {
            int l, u;
            cin >> l >> u;

            int low = l, high = n;
            int bestR = -1;
            ll maxSum = LLONG_MIN;

            while (low <= high) {
                int mid = (low + high) / 2;
                ll length = prefixSums[mid] - prefixSums[l - 1];
                ll sum = length * u - (length * (length - 1)) / 2;

                if (sum > maxSum || (sum == maxSum && mid < bestR)) {
                    maxSum = sum;
                    bestR = mid;
                }

                if (u - (length - 1) <= 0) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            cout << bestR << " ";
        }
        cout << "\n";
    }

    return 0;
}
