#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    double sum = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        nums[i] = x;
    }

    double required = 4.5 * n;
    double needed = required - sum;
    
    if (needed <= 0) {
        cout << 0;
        return 0;
    }

    sort(nums.begin(), nums.end());
    int i = 0;
    while (sum < required) {
        sum += (5 - nums[i]);
        i++;
    }
    cout << i;
}
