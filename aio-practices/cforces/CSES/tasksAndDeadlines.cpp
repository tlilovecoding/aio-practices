#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> task;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        task.push_back({a, b});
    }

    sort(task.begin(), task.end(), [](const pair<long long, long long>& p1, const pair<long long, long long>& p2) {
        return p1.first < p2.first;
    });

    long long currTime = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        currTime += task[i].first;
        sum += task[i].second - currTime;
    }

    cout << sum << endl;
    return 0;
}