#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a == 0 && b == 0) {
        for (int i = 0; i < n; ++i) cout << "1 ";
        return 0;
    }
    if (b == 0 && a != 0) {
        if(a+1 < n){
            for(int i = 0; i<(n-a); i++){
                cout<<1<<" ";
            }
            int curr = 1;
            for(int i = 0; i < a; i++){
                cout<<curr+1<<" ";
                curr++;
            }
            return 0;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }

    vector<int> res;
    res.push_back(1);
    int curr_sum = 1, curr_max = 1;
    for (int i = 0; i < b; ++i) {
        int next = curr_sum + 1;
        res.push_back(next);
        curr_sum += next;
        curr_max = max(curr_max, next);
    }
    for (int i = 0; i < a; ++i) {
        int next = curr_max + 1;
        res.push_back(next);
        curr_sum += next;
        curr_max = next;
    }

    while ((int)res.size() < n) {
        res.push_back(1);
    }

    for (int x : res) cout << x << " ";
    cout << endl;
}