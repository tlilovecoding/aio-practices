#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<ll, ll>> days(n+1);
        days[0] = {0, 0};
        // Read `a`
        for (int i = 0; i < n; i++) {
            cin >> days[i+1].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> days[i+1].second;
        }
        sort(days.begin(), days.end());

        vector<ll> prefixOfPetya(n+1, 0);
        for (int i = 1; i <= n; i++) {
            prefixOfPetya[i] = prefixOfPetya[i - 1] + days[i].second; 

        }
        ll ans = INT_MAX;
        for(int i = 0; i <= n; i++){
            ll curr = max(days[i].first, prefixOfPetya[n] - prefixOfPetya[i]);
            ans = min(curr, ans); 
        }
        cout<<ans<<endl;

    }
}