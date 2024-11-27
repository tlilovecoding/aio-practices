#include <bits/stdc++.h>
using namespace std;

int blocks[1000000];
int N;

int main() {
    ifstream input("atlanin.txt");
    ofstream output("atlanout.txt");
    input >> N;
    
    for (int i = 0; i < N; i++) {
        input >> blocks[i];
    }
    if (N < 3) {
        output << 0;
        return 0;
    }
    vector<int> highestFromLeft(N), highestFromRight(N);
    highestFromLeft[0] = blocks[0];
    for (int i = 1; i < N; i++) {
        highestFromLeft[i] = max(blocks[i], highestFromLeft[i - 1]);
    }
    for(int i = 0; i < N; i++){
        cout<<highestFromLeft[i]<<" ";
    }
    highestFromRight[N - 1] = blocks[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        highestFromRight[i] = max(blocks[i], highestFromRight[i + 1]);
    }
    
    int ans = 0;
    for (int i = 1; i < N - 1; i++) {
        int waterHeight = min(highestFromLeft[i], highestFromRight[i]) - blocks[i];
        if (waterHeight > 0) {
            ans++;
        }
    }
    
    output << ans;
}
