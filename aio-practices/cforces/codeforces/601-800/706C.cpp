#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> energy(n);
    vector<string> strings(n);

    for (ll i = 0; i < n; i++) {
        cin >> energy[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> strings[i];
    }

    vector<vector<ll>> dp(n, vector<ll>(2, LLONG_MAX));
    dp[0][0] = 0;
    dp[0][1] = energy[0];

    for (int i = 1; i < n; i++) {
        string prev = strings[i - 1];
        string prev_rev = prev;
        reverse(prev_rev.begin(), prev_rev.end());

        string curr = strings[i];
        string curr_rev = curr;
        reverse(curr_rev.begin(), curr_rev.end());

        // Keep current not reversed
        if (curr >= prev && dp[i - 1][0] != LLONG_MAX)
            dp[i][0] = min(dp[i][0], dp[i - 1][0]);

        if (curr >= prev_rev && dp[i - 1][1] != LLONG_MAX)
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);

        // Reverse current
        if (curr_rev >= prev && dp[i - 1][0] != LLONG_MAX)
            dp[i][1] = min(dp[i][1], dp[i - 1][0] + energy[i]);

        if (curr_rev >= prev_rev && dp[i - 1][1] != LLONG_MAX)
            dp[i][1] = min(dp[i][1], dp[i - 1][1] + energy[i]);
    }

    ll result = min(dp[n - 1][0], dp[n - 1][1]);
    cout << (result == LLONG_MAX ? -1 : result) << endl;
}
