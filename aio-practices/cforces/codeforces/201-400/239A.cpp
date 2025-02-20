#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y, k, n;
    cin >> y >> k >> n;

    long long firstMultiple = ((y / k) + 1) * k; //rounds to nearest multiple of k, then finds the next multiple
    if (firstMultiple > n) {
        cout << -1;
        return 0;
    }

    for (long long i = firstMultiple; i <= n; i += k) {
        cout << (i - y) << " ";
    }

    return 0;
}
