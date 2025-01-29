#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<long long, long long> count;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            count[a]++;
        }

        long long ans = 0;
        long long prev_count = 0;
        long long prevKey = -1;
        //ensure that prevvalue constrains are only kept if prevKey + 1 = currkey
        for (auto& [key, value] : count) {
            if (value > prev_count && prevKey == key-1 || prevKey == -1) {
                ans += (value - prev_count);
            }else if(prevKey != key-1){
                ans+=value;
            }
            prev_count = value;
            prevKey = key;

        }

        cout << ans << endl;
    }
    return 0;
}