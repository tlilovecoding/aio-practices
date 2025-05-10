#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char w; cin>>w;
            grid[i][j] = w;
        }
    }
    if (grid[0][0] == '*') {
        dp[0][0] = 0;
    } else {
        dp[0][0] = 1;
    }
    for (int i = 1; i < n; i++) {
        if (grid[0][i] == '*') {
            dp[0][i] = 0;
        } else {
            dp[0][i] = dp[0][i - 1];
        }
    }
    for (int i = 1; i < n; i++) {
        if (grid[i][0] == '*') {
            dp[i][0] = 0;
        } else {
            dp[i][0] = dp[i - 1][0];
        }
    }

    ll MOD = 1e9 + 7;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(grid[i][j] == '*'){
                dp[i][j] = 0;
            }else{
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%(MOD);
            }
        }
    }
    cout<<dp[n-1][n-1];
}