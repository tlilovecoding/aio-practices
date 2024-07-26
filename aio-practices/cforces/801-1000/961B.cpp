#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int lectures[n];
    int awake[n];
    
    for(int i = 0; i < n; i++) {
        cin >> lectures[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> awake[i];
    }
    
    int awakeTimes = 0;
    int temp = 0;
    int maxa = 0;
    for(int i = 0; i < k; i++) {
        if(awake[i] == 1) {
            awakeTimes += lectures[i];
        } else {
            temp += lectures[i];
        }
    }
    maxa = temp;
    for(int i = k; i < n; i++) {
        if(awake[i - k] == 0) {
            temp -= lectures[i - k];
        }
        if(awake[i] == 0) {
            temp += lectures[i];
        }
        maxa = max(maxa, temp);
    }

    int totalAwake = 0;
    for(int i = 0; i < n; i++) {
        if(awake[i] == 1) {
            totalAwake += lectures[i];
        }
    }

    cout << totalAwake + maxa << endl;

    return 0;
}