#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end()); 
        
        int ans = 0, j = 0;
        
        for (int i = 0; i < n; i++) {
            while (j + 1 < n && a[j + 1] - a[j] <= 1 && a[j + 1] - a[i] < k) {
                j++;
            }
            ans = max(ans, j - i + 1);
        }
        
        cout << ans << endl;
    }

    return 0;
}
