#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    multiset<ll> prices;
    for (int i = 0; i < n; i++) {
        ll w;
        cin >> w;
        prices.insert(w);
    }
    vector<pair<ll, int>> customers(m);
    for (int i = 0; i < m; i++) {
        ll w;
        cin >> w;
        customers[i] = {w, i};
    }

    vector<ll> answers(m, -1);
    for (int i = 0; i < m; i++) {
        auto it = prices.upper_bound(customers[i].first);
        if (it != prices.begin()) {
            --it;
            answers[customers[i].second] = *it;
            prices.erase(it);
        }
    }

    for (int i = 0; i < m; i++) {
        cout << answers[i] << endl;
    }

    return 0;
}