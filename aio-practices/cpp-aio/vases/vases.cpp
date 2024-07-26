#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    ifstream input_file("vasesin.txt");
    ofstream output_file("vasesout.txt");
    input_file >> N;
    if (N < 6) {
        output_file << "0 0 0";
    } else {
        output_file << "1 2 " << (N - 3);
    }
    return 0;
}
