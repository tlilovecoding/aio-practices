#include <bits/stdc++.h>
using namespace std;
#define ll long long

const double EPS = 1e-7;

bool canCover(const vector<ll>& houses, double d, vector<double>& stationPos) {
    int n = houses.size();
    int i = 0;
    vector<double> stations;

    while (i < n && stations.size() < 3) {
        double start = houses[i];
        double cover_until = start + 2 * d;
        stations.push_back(start + d);  // midpoint of the covered range
        // Move i to the first house not covered
        while (i < n && houses[i] <= cover_until) {
            i++;
        }
    }

    if (i == n && stations.size() <= 3) {
        stationPos = stations;
        while (stationPos.size() < 3) stationPos.push_back(stationPos.back());  // pad if needed
        return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    vector<ll> houses(n);
    for (int i = 0; i < n; i++) {
        cin >> houses[i];
    }

    sort(houses.begin(), houses.end());

    double l = 0, r = 1e9, ans = -1;
    vector<double> resultStations;
    
    while (r - l > EPS) {
        double mid = (l + r) / 2.0;
        vector<double> tempStations;
        if (canCover(houses, mid, tempStations)) {
            r = mid;
            ans = mid;
            resultStations = tempStations;
        } else {
            l = mid + EPS;
        }
    }

    cout << fixed << setprecision(6) << ans << "\n";
    for (int i = 0; i < 3; i++) {
        cout << fixed << setprecision(6) << resultStations[i] << " ";
    }
    cout << "\n";

    return 0;
}
