#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

int stringLength, alphabetSize;
string mainString;

bool readInput() {
    if (!(cin >> stringLength >> alphabetSize))
        return false;
    cin >> mainString;
    return true;
}

void processQueries() {
    // longestChainFromIndex[i]: length of longest chain starting at index i
    vector<int> longestChainFromIndex(stringLength + 1, 0);

    // nextPosition[i][c]: next occurrence of character c after index i (or stringLength if none)
    vector<vector<int>> nextPosition(stringLength + 2, vector<int>(alphabetSize, stringLength));

    for (int i = stringLength - 1; i >= 0; i--) {
        nextPosition[i] = nextPosition[i + 1]; // copy from next index
        int maxNextPos = *max_element(nextPosition[i].begin(), nextPosition[i].end());
        longestChainFromIndex[i] = 1 + longestChainFromIndex[maxNextPos];
        nextPosition[i][mainString[i] - 'a'] = i;
    }

    int queryCount;
    cin >> queryCount;

    while (queryCount--) {
        string query;
        cin >> query;
        int currentPosition = -1;

        for (char c : query) {
            currentPosition = nextPosition[currentPosition + 1][c - 'a'];
        }

        cout << longestChainFromIndex[currentPosition] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (readInput()) {
        processQueries();
    }
    return 0;
}
