#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin>>n;
    vector<pair<int, int>> orders;
    for(int i = 0; i < n; i++){
        ll l, r; cin>>l>>r;
        orders.push_back({r, l});
    }
    sort(orders.begin(), orders.end());
    //sorted by when prepatation finishes
    //dp array - max number of dishes that can b e prepared by time i, dp[i]
    vector<int> dp(n, 0);
    ll ans = 1;
    ll last = orders[0].first;
    for(int i = 1; i < n; i++){
        if(orders[i].second > last){
            //this thing which ends earlier cna start
            ans++;
            last = orders[i].first;
        }
    }
    cout<<ans;
}