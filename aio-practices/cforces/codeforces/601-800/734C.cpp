#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll x, s;
    cin >> x >> s;

    vector<ll> spellTimes(m), spellCosts(m);
    for (int i = 0; i < m; i++) {
        cin >> spellTimes[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> spellCosts[i];
    }

    vector<ll> potionTasks(k), potionCosts(k);
    for (int i = 0; i < k; i++) {
        cin >> potionTasks[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> potionCosts[i];
    }

    ll ans = n * x; // Default case: No spells or potions used

    // Try all spells
    for (int i = 0; i < m; i++) {
        if (spellCosts[i] > s) continue; // Skip if the spell is too expensive

        ll remainingBudget = s - spellCosts[i];

        // Use binary search to find the best potion within the remaining budget
        ll tasksReduced = 0;
        auto it = upper_bound(potionCosts.begin(), potionCosts.end(), remainingBudget);
        if (it != potionCosts.begin()) {
            --it;
            tasksReduced = potionTasks[it - potionCosts.begin()];
        }

        // Calculate the total time with this spell and potion combination
        ll currTime = spellTimes[i] * (n - tasksReduced);
        ans = min(ans, currTime);
    }

    // Try using only potions (no spells)
    auto it = upper_bound(potionCosts.begin(), potionCosts.end(), s);
    if (it != potionCosts.begin()) {
        --it;
        ll tasksReduced = potionTasks[it - potionCosts.begin()];
        ll currTime = x * (n - tasksReduced);
        ans = min(ans, currTime);
    }

    cout << ans << endl;
    return 0;
}