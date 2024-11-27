#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("shell.in");
    ofstream fout("shell.out");

    int n;
    fin >> n;

    vector<tuple<int, int, int>> moves(n);
    for (int i = 0; i < n; ++i) {
        int a, b, g;
        fin >> a >> b >> g;
        moves[i] = make_tuple(a, b, g);
    }

    int maxGuesses = 0;
    for (int startShell = 1; startShell <= 3; ++startShell) {
        int currShell = startShell;
        int correctGuesses = 0;
        for (int j = 0; j < n; ++j) {
            int a, b, g;
            tie(a, b, g) = moves[j];
            if (a == currShell) {
                currShell = b;
            } else if (b == currShell) {
                currShell = a;
            }

            if (g == currShell) {
                correctGuesses++;
            }
        }

        maxGuesses = max(maxGuesses, correctGuesses);
    }

    fout << maxGuesses ;
    return 0;
}
