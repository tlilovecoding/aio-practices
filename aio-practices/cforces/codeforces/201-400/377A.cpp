#include <bits/stdc++.h>
using namespace std;
vector<string> grid; // The maze grid
vector<vector<bool>> visited; // Tracks visited cells
vector<pair<int, int>> order; // Stores the DFS visit order of empty cells
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m, k;

void dfs(int x, int y){
    visited[x][y] = true;
    order.push_back({x, y});
    for(int d = 0; d < 4; d++){
        int nx = x + dx[d]; int ny = y + dy[d];
        if(nx>=x && nx < n && ny>=0 && ny<m && !visited[nx][ny]&&grid[nx][ny] =='.'){
            dfs(nx, ny);
            //see all the connected stuff
        }
    }
}

int main(){
    cin>>n>>m>>k;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i)
        cin >> grid[i];

    bool started = false;
    for (int i = 0; i < n && !started; ++i) {
        for (int j = 0; j < m && !started; ++j) {
            if (grid[i][j] == '.') {
                dfs(i, j);
                started = true;
            }
        }
    }
    int total = order.size();
    for(int i = 0; i < k; i++){
        auto[x, y] = order[total - i - 1];
        grid[x][y] = 'X';

    }
    

}