#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<long long, long long> counts;
        for (int i = 0; i < n; i++) {
            long long j;
            cin >> j;
            counts[j]++;
        }

        priority_queue<long long> pq;
        for (const auto& [key, val] : counts) {
            pq.push(val);
        }

        int remaining = n; // Start with all elements
        while (pq.size() > 1) {
            long long top1 = pq.top(); pq.pop();
            long long top2 = pq.top(); pq.pop();

            // Remove pairs and reduce counts
            remaining -= 2;
            if (--top1 > 0) pq.push(top1);
            if (--top2 > 0) pq.push(top2);
        }

        // Remaining is the number of unmatched elements
        cout << remaining << endl;
    }
    return 0;
}
//forgot priority queues existed