#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(double x, ll n, vector<pair<ll, ll>> &vec) {
    double rangeL = -1e18; // Minimum possible left boundary
    double rangeR = 1e18;  // Maximum possible right boundary

    for (ll i = 0; i < n; i++) {
        rangeR = min(rangeR, vec[i].first + x * vec[i].second);
        rangeL = max(rangeL, vec[i].first - x * vec[i].second);
        if (rangeR < rangeL) {
            return false;
        }
    }
    return true;
}

int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> friends(n);

    for (int i = 0; i < n; i++) {
        ll w;
        cin >> w;
        friends[i].first = w;
    }
    for (int i = 0; i < n; i++) {
        ll w;
        cin >> w;
        friends[i].second = w;
    }
    double l = 0;
    double r = 1e9;
    while (r - l > 1e-7) {
        double u = (l + r) / 2;
        if (check(u, n, friends)) {
            r = u;
        } else {
            l = u;
        }
    }
    cout << fixed << setprecision(6) << r << endl;
}
