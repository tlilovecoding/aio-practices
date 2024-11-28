#include <bits/stdc++.h>
using namespace std;

struct Event {
    int person, milk, time;
};

vector<Event> events;

int main() {
    freopen("badmilk.in", "r", stdin);
    freopen("badmilk.out", "w", stdout);

    int n, m, d, s;
    cin >> n >> m >> d >> s;

    // Read drinking events
    for (int i = 0; i < d; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        events.push_back({a - 1, b - 1, c});
    }

    // Read sickness events// {person, time}
    for (int i = 0; i < s; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a - 1, -1, b}); // Append sickness events to `events`
    }

    int ans = 0;

    // Sort events by time, then by milk (to keep logic in your code intact)
    sort(events.begin(), events.end(), [&](const Event &e1, const Event &e2) {
        return e1.time != e2.time ? e1.time < e2.time : e1.milk < e2.milk;
    });

    // Test each milk type
    for (int i = 0; i < m; i++) {
        bool isValid = true;
        vector<int> sick(n, 0); // Tracks who might get sick if milk `i` is bad

        // Check if milk `i` can be the bad milk
        for (const auto &e : events) {
            if (e.milk == i) {
                sick[e.person] = 1; // Mark person as having drunk milk `i`
            } else if (e.milk == -1) { // Sickness event
                if (sick[e.person] != 1) {
                    isValid = false;
                    break;
                }
            }
        }
        if (isValid) {
            int curr = 0;
            for (int j = 0; j < n; j++) {
                if (sick[j] == 1) curr++;
            }
            ans = max(ans, curr);
        }
    }

    cout << ans << endl;
    return 0;
}
