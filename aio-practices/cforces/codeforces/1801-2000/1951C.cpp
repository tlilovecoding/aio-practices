//say the array was something like, 1 3 4 5 3 7, m = 1, k = 4. 
// obviously, you'd take the four cheapest ones, i.e. go 1 3 4 3, because even though evey tim eyou take one
//the price rises, but all of it rises anyways. 
//5 2 1 3 --> m = 2, k = 3

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;

        vector<pair<ll, int>> days;
        for (int i = 0; i < n; i++) {
            ll w; 
            cin >> w;
            days.push_back({w, i});
        }

        // Sort days by ticket price
        sort(days.begin(), days.end());

        ll totalCost = 0;
        ll ticketsBought = 0;
        ll priceIncrease = 0;

        for (int i = 0; i < n && ticketsBought < k; i++) {
            ll price = days[i].first + priceIncrease; // Actual price including increase
            ll buyCount = min(m, k - ticketsBought);  // Buy up to m tickets

            totalCost += buyCount * price;
            ticketsBought += buyCount;
            priceIncrease += buyCount; // Increase future prices
        }

        cout << totalCost << "\n";
    }
    return 0;
}
