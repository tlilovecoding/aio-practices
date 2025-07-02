#include <bits/stdc++.h>
using namespace std;
int main(){
    //my concept of a plan:
    //first try to remove all the stone that you can without exploding gold
    //this is just done by iterating thru all the cells
    //no way this will create a suboptimal amt of gold collected
    //then, iterate through all the empty cells, including
    //the ones that are newly created
    //u need to see which starting position minimises gold lost the most
    //after that, if you move optimally
    //you shouldn't have to explode extra gold.
    //can u prove that all gold 
    //is accessible?
    //apart from if the grid size is weird
    //or if there aren't any empty spaces
    // i think so...
    //i think that all gold is accessible...
    //is it possible for u to bvlast all the stones
    //yes, u just need starting position
    //solution: find the minimum
    //amt of gold that is blasted away by uir starting position
    //subtract that by the total gold
    //i think...
    //i think the intuition is valid.
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        int goldCount = 0;
        vector<vector<char>> grid(n, vector<char>(m));
        vector<vector<int>> gold(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                gold[i][j] = (grid[i][j] == 'g') ? 1 : 0;
                if(grid[i][j] == 'g'){
                    goldCount++;
                }
            }
        }
        vector<vector<int>> psum(n+1, vector<int>(m+1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                psum[i][j] = gold[i-1][j-1]+ psum[i-1][j]+ psum[i][j-1] - psum[i-1][j-1];
            }
        }
        auto get_sum = [&](int r1, int c1, int r2, int c2) {
            r1 = max(r1, 0); c1 = max(c1, 0);
            r2 = min(r2, n - 1); c2 = min(c2, m - 1);
            if (r1 > r2 || c1 > c2) return 0;
            // shift to 1-indexed
            r1++; c1++; r2++; c2++;
            return psum[r2][c2] - psum[r1 - 1][c2] - psum[r2][c1 - 1] + psum[r1 - 1][c1 - 1];
        };

        int minGoldLost = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '.') {
                    // Dynamite center at (i,j)
                    int lost = get_sum(i - k + 1, j - k + 1, i + k - 1, j + k - 1);  // strictly inside
                    minGoldLost = min(minGoldLost, lost);
                }
            }
        }

        cout << goldCount - minGoldLost << endl;
    }
}