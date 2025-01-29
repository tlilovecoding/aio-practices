
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> occurrences(n + 1, 0);
        set<int> unique_elements;
 
        for (int i = 0; i < n; i++) {
            int skill;
            cin >> skill;
            occurrences[skill]++;
            unique_elements.insert(skill);
        }
 
        int maxFrequency = *max_element(occurrences.begin(), occurrences.end());
        int uniqueCount = unique_elements.size();
        int x = min(maxFrequency, uniqueCount - 1);
        x = max(x, min(maxFrequency - 1, uniqueCount));
        cout << x << endl;
    }
    return 0;
}