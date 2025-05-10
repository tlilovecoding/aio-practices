#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> kangaroo(n);
    for (int i = 0; i < n; i++) {
        cin >> kangaroo[i];
    }

    sort(kangaroo.begin(), kangaroo.end());

    ll l = 0; // Pointer for smaller kangaroos
    ll r = n / 2; // Pointer for larger kangaroos
    ll ctrForHidden = 0;

    while (l < n / 2 && r < n) {
        if (kangaroo[l] * 2 <= kangaroo[r]) {
            // Pair the smaller kangaroo with the larger kangaroo
            ctrForHidden++;
            l++;
            r++;
        } else {
            // Move the larger pointer to find a suitable pair
            r++;
        }
    }

    cout << n - ctrForHidden << endl;
    return 0;
}