#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<int> notes(n);
    for (int i = 0; i < n; i++) {
        cin >> notes[i];
    }

    // possible[i][f] = true if note i can be played with finger f
    vector<vector<bool>> possible(n, vector<bool>(6, false));
    vector<vector<int>> prev(n, vector<int>(6, -1));  // Track previous finger for backtracking

    // Initialize the first note to be playable with any finger (1-5)
    for (int f = 1; f <= 5; f++) {
        possible[0][f] = true;
    }

    // Fill the table for all subsequent notes
    for (int i = 1; i < n; i++) {
        for (int prevF = 1; prevF <= 5; prevF++) {  // for each valid finger for note i-1
            if (!possible[i - 1][prevF]) continue;  // if no valid state from the previous note, skip

            for (int currF = 1; currF <= 5; currF++) {  // for each possible finger for note i
                // Handling upward transition (note[i] > note[i-1])
                if (notes[i] > notes[i - 1] && currF > prevF) {
                    possible[i][currF] = true;
                    prev[i][currF] = prevF;
                }
                // Handling downward transition (note[i] < note[i-1])
                else if (notes[i] < notes[i - 1] && currF < prevF) {
                    possible[i][currF] = true;
                    prev[i][currF] = prevF;
                }
                // Handling equal transition (note[i] == note[i-1])
                else if (notes[i] == notes[i - 1] && currF != prevF) {
                    possible[i][currF] = true;
                    prev[i][currF] = prevF;
                }
            }
        }
    }

    // Find the last valid finger for the last note
    int lastFinger = -1;
    for (int f = 1; f <= 5; f++) {
        if (possible[n - 1][f]) {
            lastFinger = f;
            break;  // take the first valid one
        }
    }

    // If no valid solution is found
    if (lastFinger == -1) {
        cout << -1 << endl;
        return 0;
    }

    // Backtrack to find the sequence of fingers
    vector<int> result(n);
    result[n - 1] = lastFinger;
    for (int i = n - 1; i > 0; i--) {
        result[i - 1] = prev[i][result[i]];  // Backtrack correctly
    }

    // Output the result
    for (int f : result) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}