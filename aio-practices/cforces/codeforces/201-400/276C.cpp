#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<int> arr(n);
    for (int &w : arr) {
        cin >> w;
    }
    
    sort(arr.begin(), arr.end(), greater<int>()); // Sort in descending order

    vector<int> differenceArr(n + 1, 0); // Fixed size to `n+1`
    vector<pair<int, int>> queries(q);
    
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        queries[i] = {l, r};
        differenceArr[l]++;
        if (r + 1 <= n) differenceArr[r + 1]--;
    }

    vector<pair<int, int>> arr2(n + 1, {0, 0}); // Fixed size to `n+1`
    for (int i = 1; i <= n; i++) {
        arr2[i].first = arr2[i - 1].first + differenceArr[i];
        arr2[i].second = i;
    }

    // Sort by frequency (descending order)
    sort(arr2.begin() + 1, arr2.end(), greater<pair<int, int>>());

    vector<int> finalArray(n, 0);
    for (int i = 1; i <= n; i++) {
        finalArray[arr2[i].second - 1] = arr[i - 1]; // Corrected index
    }

    vector<long long> prefixSums(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixSums[i] = prefixSums[i - 1] + finalArray[i - 1];
    }

    long long result = 0;
    for (const auto &[l, r] : queries) {
        result += prefixSums[r] - prefixSums[l - 1];
    }

    cout << result << endl;
}
