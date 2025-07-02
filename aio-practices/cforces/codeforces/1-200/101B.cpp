#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, m; cin>>n>>m;
    set<ll> ts;
    //dp[i] = number of ways u can end at that bus stop
    map<ll, vector<ll>> endsatToStartsAt;
    if(m == 0){
        cout<<0;
        return 0;
    }
    for(int i = 0; i < m; i++){
        ll s, t; cin>>s>>t;
        ts.insert(t);
        endsatToStartsAt[t].push_back(s);
    }
    ll MOD = 1e9+7;
    vector<ll>dp(n+1, 0);
    dp[0] = 1;
    for (ll t : ts) {
        for (ll s : endsatToStartsAt[t]) {
            for(int i = s; i < t; i++){
                dp[t] = (dp[t] + dp[i])%MOD;
            }
        }
    }
    cout<<dp[n]%MOD;
    // = buses that end at i - each starting stop
}
