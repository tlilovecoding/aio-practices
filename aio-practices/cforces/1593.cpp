#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    
    while(t--) {
        int n, k;
        cin >> n >> k;  // Read n (total distance) and k (number of distances)
        
        vector<int> distance(k);
        for(int i = 0; i < k; i++) {
            int x;
            cin >> x;  // Read each distance value
            distance[i] = n - x;  // Calculate distance from n
        }
        
        sort(distance.begin(), distance.end());  // Sort distances
        
        int ctr = 0;
        int totalSeconds = 0;
        
        // Sum distances until totalSeconds reaches or exceeds n
        while(totalSeconds < n) {
            totalSeconds += distance[ctr++];
        }
        
        cout << --ctr << endl;  // Output the number of distances used
    }
    
    return 0;
}
