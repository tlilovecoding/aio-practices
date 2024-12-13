#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);

    int n;
    cin >> n;

    map<string, int> cowStats;
    // Initialize cows' production to 0
    vector<string> cowNames = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    for (const string& cow : cowNames) {
        cowStats[cow] = 0;  // Set initial production to 0 for all cows
    }

    // Process the input milking logs
    for (int i = 0; i < n; i++) {
        string name;
        int m;
        cin >> name >> m;
        cowStats[name] += m;  // Add milk production to the cow
    }

    // Sort cows based on their milk production
    vector<pair<string, int>> sortedStats(cowStats.begin(), cowStats.end());
    sort(sortedStats.begin(), sortedStats.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;  // Sort by milk production (ascending order)
    });

    // Find the second-smallest milk production
    int mina = sortedStats[0].second;  // Smallest production
    string cow = "Tie";  // Default to "Tie"
    bool found_second = false;

    // Find the second smallest unique milk production
    for (int i = 1; i < sortedStats.size(); i++) {
        if (sortedStats[i].second > mina) {
            if (!found_second) {
                cow = sortedStats[i].first;  // First cow with second-smallest production
                found_second = true;
            } else if (sortedStats[i].second == sortedStats[i-1].second) {
                cow = "Tie";  // Multiple cows tie for the second-smallest
                break;
            }
        }
    }

    cout << cow << endl;
    return 0;
}
