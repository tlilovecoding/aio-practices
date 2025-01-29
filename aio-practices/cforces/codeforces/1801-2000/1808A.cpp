#include <bits/stdc++.h>
using namespace std;

// Function to get the max and min digit difference
int getMaxMinDiff(int num) {
    int maxDigit = 0, minDigit = 9;
    while (num) {
        int digit = num % 10;
        maxDigit = max(maxDigit, digit);
        minDigit = min(minDigit, digit);
        num /= 10;
    }
    return maxDigit - minDigit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int bestNum = a;
        int bestDiff = getMaxMinDiff(a);

        for (int i = a; i <= b; ++i) {
            int currentDiff = getMaxMinDiff(i);
            if (currentDiff > bestDiff) {
                bestDiff = currentDiff;
                bestNum = i;
                if (bestDiff == 9) break;
            }
        }
        cout << bestNum << endl;
    }
    return 0;
}
