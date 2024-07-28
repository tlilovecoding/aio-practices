#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> compute_prefix_freq(const string &s, int n) {
    vector<vector<int>> prefix_freq(n + 1, vector<int>(26, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            prefix_freq[i + 1][j] = prefix_freq[i][j];
        }
        prefix_freq[i + 1][s[i] - 'a']++;
    }
    return prefix_freq;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        string str1, str2;
        cin >> str1 >> str2;
        
        vector<vector<int>> prefix_freq1 = compute_prefix_freq(str1, n);
        vector<vector<int>> prefix_freq2 = compute_prefix_freq(str2, n);
        
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            
            vector<int> freq1(26, 0);
            vector<int> freq2(26, 0);
            
            for (int i = 0; i < 26; ++i) {
                freq1[i] = prefix_freq1[r + 1][i] - prefix_freq1[l][i];
                freq2[i] = prefix_freq2[r + 1][i] - prefix_freq2[l][i];
            }
            int changes_needed = 0;
            for (int i = 0; i < 26; ++i) {
                if (freq2[i] > freq1[i]) {
                    changes_needed += freq2[i] - freq1[i];
                }
            }
            
            cout << changes_needed << "\n";
        }
    }
    
    return 0;
}
