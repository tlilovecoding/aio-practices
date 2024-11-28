#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    unordered_map<long long, long long> seen; // Maps number to its index (1-based)

    for (long long i = 1; i <= n; i++) {
        long long num;
        cin >> num;
		if(num<=x){
			        long long complement = x - num;
        if (seen.count(complement)) {
            // If complement exists, print the indices
            cout << seen[complement] << " " << i;
            return 0; // End program after finding the pair
        }

        // Otherwise, store the number and its index
        seen[num] = i;
		}
    }

    // If no pair found
    cout << "IMPOSSIBLE";
    return 0;
}
