#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    vector<int> pages(n);
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    vector<int> dp(x + 1, 0);

    for (int book = 0; book < n; book++) {
        for (int price = x; price >= prices[book]; price--) {
            dp[price] = max(dp[price], pages[book] + dp[price - prices[book]]);
        }
    }

    cout << dp[x] << endl;
    return 0;
}