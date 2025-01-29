#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        int m; cin >> m;
        vector<int> d(m);
        map<int, int> cnt;
        set<int> s;
        
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                cnt[b[i]]++;
            }
            s.insert(b[i]);
        }
        
        for (int i = 0; i < m; i++) cin >> d[i];
        
        int ok = 0;
        if (s.count(d[m - 1])) ok = 1;
        
        for (int i = 0; i < m; i++) {
            if (cnt.count(d[i]) && --cnt[d[i]] == 0) {
                cnt.erase(d[i]);
            }
        }
        
        if (ok && cnt.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}