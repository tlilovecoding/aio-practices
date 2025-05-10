#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll m, const vector<ll>& needed, const vector<ll>& ingredients, ll k, ll n) {
    ll remainingK = k; // Use a local variable to track remaining k
    for (int i = 0; i < n; i++) {
        ll required = needed[i] * m;
        if (required > ingredients[i]) {
            remainingK -= (required - ingredients[i]);
            if (remainingK < 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> needed(n);
    vector<ll> ingredients(n);

    for (int i = 0; i < n; i++) {
        cin >> needed[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> ingredients[i];
    }

    ll l = 0;
    ll r = 1e10; // Upper bound for binary search
    ll ans = 0;

    while (l <= r) {
        ll m = (l + r) / 2;
        if (check(m, needed, ingredients, k, n)) {
            ans = m; // Update the answer
            l = m + 1; // Try for a larger value of m
        } else {
            r = m - 1; // Try for a smaller value of m
        }
    }

    cout << ans << endl;
    return 0;
}