#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int sushi[n];
    for (int i = 0; i < n; i++) {
        cin >> sushi[i];
    }
    vector<int> numberConsecutives;
    int lastElement = sushi[0];
    int length = 1;

    for (int i = 1; i < n; i++) {
        if (sushi[i] != lastElement) {
            numberConsecutives.push_back(length);
            lastElement = sushi[i];
            length = 1;
        } else {
            length++;
        }
    }
    numberConsecutives.push_back(length);
    int ans = 0;
    int tmp = numberConsecutives[0];

    for (int i = 1; i < numberConsecutives.size(); i++) {
        int sharedSushi = min(tmp, numberConsecutives[i]);
        ans = max(sharedSushi, ans);
        tmp = numberConsecutives[i];
    }

    cout << ans * 2;
}
