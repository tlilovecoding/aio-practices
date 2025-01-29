#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string str;
        cin >> str;
        vector<int> consecutives;
        int consecutiveCount = 0;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '1') {
                consecutiveCount++;
            } else if (consecutiveCount > 0) {
                consecutives.push_back(consecutiveCount);
                consecutiveCount = 0;
            }
        }
        if (consecutiveCount > 0) {
            consecutives.push_back(consecutiveCount);
        }
        sort(consecutives.begin(), consecutives.end(), greater<int>());
        int ans = 0;
        for (int k = 0; k < consecutives.size(); k += 2) {
            ans += consecutives[k];
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
