#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, l, k; cin >> n >> l >> k;

    vector<int> signs(n + 1);
    for(int i = 0; i < n; i++){
        cin >> signs[i];
    }
    signs[n] = l;

    vector<int> speeds(n);
    for(int i = 0; i < n; i++){
        cin >> speeds[i];
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, LLONG_MAX));
    dp[0][0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= k; j++){
            if(dp[i][j] == LLONG_MAX) continue;

            for(int pos = i + 1; pos <= n; pos++){
                int removed = pos - i - 1;
                if(removed + j > k) break;

                ll travel_time = dp[i][j] + 1LL * speeds[i] * (signs[pos] - signs[i]);
                dp[pos][j + removed] = min(dp[pos][j + removed], travel_time);
            }
        }
    }

    ll answer = LLONG_MAX;
    for(int j = 0; j <= k; j++){
        answer = min(answer, dp[n][j]);
    }

    cout << answer << '\n';
}
