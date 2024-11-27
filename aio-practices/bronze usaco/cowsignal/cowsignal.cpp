#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);

	int M, N, K;
	cin >> M >> N >> K;

	for (int i = 0; i < M; i++) {
		string line;
		cin >> line;
		string outputLine;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < K; k++) { outputLine += line[j]; }
		}
		for (int j = 0; j < K; j++) { cout << outputLine << "\n"; }
	}
}