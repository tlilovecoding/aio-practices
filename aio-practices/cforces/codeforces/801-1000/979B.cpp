#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sans(string str, ll n) {
    unordered_map<char, ll> freqa;
    for (char c : str) {
        freqa[c]++;
    }
    ll maxCount = 0;
    for (auto& [ch, count] : freqa) {
        maxCount = max(maxCount, count);
    }

    ll len = str.size();
    if (maxCount == len && n == 1) return len - 1;
    return min(len, maxCount + n);
}

int main() {
    ll n;
    string k, s, ka;
    cin >> n >> k >> s >> ka;

    ll ans1 = sans(k, n);
    ll ans2 = sans(s, n);
    ll ans3 = sans(ka, n);

    if (ans1 > ans2 && ans1 > ans3) {
        cout << "Kuro";
    } else if (ans2 > ans1 && ans2 > ans3) {
        cout << "Shiro";
    } else if (ans3 > ans1 && ans3 > ans2) {
        cout << "Katie";
    } else {
        cout << "Draw";
    }

    return 0;
}
