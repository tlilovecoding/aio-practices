#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    
    vector<pair<long long, long long>> buildings(n);
    for (long long i = 0; i < n; i++) {
        long long h; 
        cin >> h;
        buildings[i] = {h, i};  // Store (height, original index)
    }
    
    sort(buildings.begin(), buildings.end());  // Sort by height
    
    long long l = 0, r = 1;
    bool found = false;

    while (r < n) {
        int diff = buildings[r].first - buildings[l].first;

        if (diff == x) { 
            if (abs(buildings[r].second - buildings[l].second) >= k) {
                found = true;
                break;
            }
            r++;
        } else if (diff < x) {
            r++;
        } else {
            l++;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}
