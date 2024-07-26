#include <bits/stdc++.h>
using namespace std;
int N, M;
int dp[10000005][2];
int main() {
    ifstream input_file("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/training/drivein.txt");
    ofstream output_file("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/training/driveout.txt");
    input_file >> N >> M;
    if (N < 1) {
        output_file << 1%M;
    } else {
        dp[0][0] = 1;
        dp[0][1] = 1;
        for (int i = 1; i <= N; ++i) {
            dp[i][0] = ((dp[i - 1][0] * dp[i - 1][0]) % M + (i > 1 ? (dp[i - 2][0] * dp[i - 2][0]) % M * dp[i - 1][1] : 0) + 1) % M;
            dp[i][1] = ((i > 1 ? (dp[i - 2][0] * dp[i - 2][0]) % M * dp[i - 1][1]:0) + 1) % M;
        }

        dp[N][0] = dp[N][0] % M;
        output_file << dp[N][0];
    }
}
