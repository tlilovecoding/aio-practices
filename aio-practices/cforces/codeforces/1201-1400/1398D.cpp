#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, g, b; cin>>r>>g>>b;
    vector<int> red(r), green(g), blue(b);
    for(int i = 0; i < r; i++) cin>>red[i];
    for(int i = 0; i < g; i++) cin>>green[i];
    for(int i = 0; i < b; i++) cin>>blue[i];
    sort(red.rbegin(), red.rend());
    sort(green.rbegin(), green.rend());
    sort(blue.rbegin(), blue.rend());

    vector<vector<vector<int>>> dp(r+1, vector<vector<int>>(g+1, vector<int>(b+1, 0)));
    int ans = 0;
    for(int i = 0; i <= r; i++){
        for(int j = 0; j <= g; j++){
            for(int k = 0; k <= b; k++){
                if(i < r && j < g) //both must have enough
                    dp[i+1][j+1][k] = max(dp[i+1][j+1][k], dp[i][j][k] + red[i]*green[j]);
                if(i < r && k < b)
                    dp[i+1][j][k+1] = max(dp[i+1][j][k+1], dp[i][j][k] + red[i]*blue[k]);
                if(j < g && k < b)
                    dp[i][j+1][k+1] = max(dp[i][j+1][k+1], dp[i][j][k] + green[j]*blue[k]);
                ans = max(ans, dp[i][j][k]);
            }
        }
    }
    cout << ans << endl;
}