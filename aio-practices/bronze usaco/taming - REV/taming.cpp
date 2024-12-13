#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
#define MAXN 100000

int N;
int A[MAXN];

int main() {
    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    // The first day must always be a break-in day
    if (A[0] > 0) {
        cout << -1 << '\n';
        return 0;
    }
    A[0] = 0; // Ensure the first day is a break-in day

    int breakInDays = -1; // Used to track expected countdown values
    int requiredBreaks = 0; // Minimum break-ins
    int possibleBreaks = 0; // Maximum additional break-ins

    // Fill in countdown values and validate input
    for (int i = N - 1; i >= 0; i--) {
        if (A[i] != -1 && breakInDays != -1 && A[i] != breakInDays) {
            cout << -1 << '\n'; // Inconsistent countdown
            return 0;
        }
        if (A[i] != -1) {
            breakInDays = A[i] - 1; // Update the countdown
        } else if (breakInDays != -1) {
            A[i] = breakInDays; // Fill missing countdown
            breakInDays--;
        }

        // Count break-in days
        if (A[i] == 0) {
            requiredBreaks++;
        }
        if (A[i] == -1) {
            possibleBreaks++; // Track potential break-ins
        }
    }

    cout << requiredBreaks << ' ' << requiredBreaks + possibleBreaks << '\n';
    return 0;
}
