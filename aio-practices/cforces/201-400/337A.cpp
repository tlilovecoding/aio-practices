#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> puzzles;
    // n-1 spaces apart
    for(int i = 0; i < m; i++){
        int x; cin>>x;
        puzzles.push_back(x);
    }
    sort(puzzles.begin(), puzzles.end());
    int end = n-1;
    int ans = 1e6;
    for(int i = 0; end < m; i++){
        int difference = puzzles[end] - puzzles[i];
        ans = min(difference, ans);
        end++;
    }
    cout<<ans;
}