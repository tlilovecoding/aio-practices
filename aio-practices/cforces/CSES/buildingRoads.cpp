#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> roads;
vector<bool> visited;

void dfs(int node){
    visited[node] = true;
    for(int w : roads[node]){
        if(!visited[w]){
            dfs(w);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    roads.assign(n + 1, vector<int>());
    visited.assign(n + 1, false);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        roads[a].push_back(b);
        roads[b].push_back(a);
    }

    vector<int> islands;

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            islands.push_back(i);
            dfs(i);
        }
    }

    cout << islands.size() - 1 << endl;
    for (int i = 1; i < islands.size(); ++i) {
        cout << islands[i - 1] << " " << islands[i] << "\n";
    }
}
