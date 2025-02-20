#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    const long long MOD = 1e9 + 7;
    long long dp[n + 1] = {0};
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    cout << dp[n] << endl;
    return 0;
}