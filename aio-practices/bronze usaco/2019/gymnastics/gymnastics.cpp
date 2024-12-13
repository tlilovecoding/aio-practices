#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");
    
    int n, k; 
    fin >> n >> k;
    
    vector<vector<int>> rankings(k, vector<int>(k, 0));
    for (int w = 0; w < n; w++) {
        vector<int> row(k);
        for (int i = 0; i < k; i++) {
            fin >> row[i];
        }
        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k; j++) {
                rankings[row[i] - 1][row[j] - 1]++;
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (rankings[i][j] == n) {
                ans++;
            }
        }
    }
    
    fout << ans << endl;
    
    return 0;
}
