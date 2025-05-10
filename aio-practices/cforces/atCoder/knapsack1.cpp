#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int w;
    cin >> w;
    vector<long long> values(n);
    vector<long long> weights(n);
    for (int i = 0; i < n; i++) {
        long long k, v;
        cin >> k >> v;
        values[i] = v;
        weights[i] = k;
    }
    vector<long long> dp(w + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = w; j >= weights[i]; j--) {
            dp[j] = max(dp[j], values[i] + dp[j - weights[i]]);
            //reverse order to prevent double counting a value for one singular weight
        }
    }

    cout << dp[w] << endl;
    return 0;
}