#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        int ans = 0;  // Maximum number of valid teams
        vector<int> arr(n);  // Stores the participant weights
        map<int, int> occurrences;  // Frequency map for weights

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            occurrences[arr[i]]++;
        }

        for (int s = 2; s <= 2 * n; s++) {
            int cnt = 0; 
            map<int, int> freq = occurrences;

            for (int i = 0; i < n; i++) {
                int current = arr[i];
                int complement = s - current;

                if (complement >= 1 && freq[current] > 0 && freq[complement] > 0) {
                    if (current == complement && freq[current] < 2) continue;
                    freq[current]--;
                    freq[complement]--;
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
    return 0;
}
