#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> nextInLine;
    unordered_set<int> appearsAsFront, appearsAsBack;

    vector<int> queue(n + 1); // 1-based index: queue[1], queue[2], ...

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        nextInLine[a] = b;

        if (a != 0) appearsAsFront.insert(a);
        if (b != 0) appearsAsBack.insert(b);

        // If this student has no one in front (a == 0), they are second in line
        if (a == 0 && b != 0)
            queue[2] = b;
    }

    // Find the first person in line: they never appear as 'b' (nobody is behind them)
    for (int student : appearsAsFront) {
        if (appearsAsBack.count(student) == 0) {
            queue[1] = student;
            break;
        }
    }

    // Fill the rest of the queue using the pattern:
    // queue[i] = person who comes after queue[i - 2]
    for (int i = 3; i <= n; i++) {
        queue[i] = nextInLine[queue[i - 2]];
    }

    // Print the queue from front to back
    for (int i = 1; i <= n; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;

    return 0;
}